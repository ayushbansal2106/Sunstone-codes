package model;

import java.util.ArrayList;
import java.util.List;
import java.util.Date;

public class Order {
    private int id;
    private User user;
    private List<OrderItem> items;
    private Address shippingAddress;
    private Payment payment;
    private String status;
    private Date orderDate;
    private String trackingNumber;

    public Order(int id, User user, List<OrderItem> items, Address shippingAddress) {
        this.id = id;
        this.user = user;
        this.items = new ArrayList<>(items);
        this.shippingAddress = shippingAddress;
        this.status = "PENDING";
        this.orderDate = new Date();
    }

    public int getId() {
        return id;
    }

    public User getUser() {
        return user;
    }

    public List<OrderItem> getItems() {
        return items;
    }

    public Address getShippingAddress() {
        return shippingAddress;
    }

    public Payment getPayment() {
        return payment;
    }

    public String getStatus() {
        return status;
    }

    public Date getOrderDate() {
        return orderDate;
    }

    public String getTrackingNumber() {
        return trackingNumber;
    }

    public void setPayment(Payment payment) {
        this.payment = payment;
    }

    public void setStatus(String status) {
        this.status = status;
    }

    public void setTrackingNumber(String trackingNumber) {
        this.trackingNumber = trackingNumber;
    }

    public double getTotal() {
        return items.stream()
                .mapToDouble(OrderItem::getSubtotal)
                .sum();
    }
} 