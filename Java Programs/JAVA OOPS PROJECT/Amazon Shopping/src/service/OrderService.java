package service;

import model.Order;
import model.OrderItem;
import model.Product;
import model.User;
import model.Address;
import model.Payment;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.stream.Collectors;

public class OrderService {
    private Map<Integer, Order> orders;
    private ProductService productService;
    private int nextOrderId;

    public OrderService(ProductService productService) {
        this.orders = new HashMap<>();
        this.productService = productService;
        this.nextOrderId = 1;
    }

    public Order createOrder(User user, List<OrderItem> items, Address shippingAddress) {
        // Validate stock availability
        for (OrderItem item : items) {
            Product product = item.getProduct();
            if (product.getStock() < item.getQuantity()) {
                throw new IllegalArgumentException("Insufficient stock for product: " + product.getName());
            }
        }

        // Create order
        Order order = new Order(nextOrderId++, user, items, shippingAddress);
        orders.put(order.getId(), order);

        // Update stock
        for (OrderItem item : items) {
            Product product = item.getProduct();
            productService.updateStock(product.getId(), -item.getQuantity());
        }

        return order;
    }

    public Order getOrderById(int id) {
        return orders.get(id);
    }

    public List<Order> getOrdersByUser(User user) {
        return orders.values().stream()
                .filter(order -> order.getUser().equals(user))
                .collect(Collectors.toList());
    }

    public List<Order> getOrdersByStatus(String status) {
        return orders.values().stream()
                .filter(order -> order.getStatus().equals(status))
                .collect(Collectors.toList());
    }

    public void updateOrderStatus(int orderId, String status) {
        Order order = orders.get(orderId);
        if (order != null) {
            order.setStatus(status);
        }
    }

    public void setOrderTracking(int orderId, String trackingNumber) {
        Order order = orders.get(orderId);
        if (order != null) {
            order.setTrackingNumber(trackingNumber);
        }
    }

    public void processPayment(Order order, Payment payment) {
        order.setPayment(payment);
        if (payment.getStatus().equals("COMPLETED")) {
            order.setStatus("CONFIRMED");
        }
    }

    public List<Order> getAllOrders() {
        return new ArrayList<>(orders.values());
    }
} 