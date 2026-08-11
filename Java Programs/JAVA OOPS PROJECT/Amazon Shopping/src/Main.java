import model.*;
import service.*;
import java.util.List;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        // Initialize services
        UserService userService = new UserService();
        ProductService productService = new ProductService();
        OrderService orderService = new OrderService(productService);
        PaymentService paymentService = new PaymentService();

        try {
            // Register a user
            User user = userService.registerUser("john_doe", "password123", "john@example.com");
            System.out.println("User registered: " + user.getUsername());

            // Add shipping address
            Address address = new Address("123 Main St", "New York", "NY", "10001", "USA");
            userService.addAddress(user, address);

            // Add products
            Product laptop = productService.addProduct("Laptop", "High-performance laptop", 999.99, 10, "Electronics");
            Product smartphone = productService.addProduct("Smartphone", "Latest model smartphone", 699.99, 15, "Electronics");
            System.out.println("Products added: " + laptop.getName() + ", " + smartphone.getName());

            // Create order items
            List<OrderItem> orderItems = new ArrayList<>();
            orderItems.add(new OrderItem(laptop, 1));
            orderItems.add(new OrderItem(smartphone, 2));

            // Create and process order
            Order order = orderService.createOrder(user, orderItems, address);
            System.out.println("Order created with ID: " + order.getId());

            // Process payment
            Payment payment = paymentService.createPayment(order, "CREDIT_CARD", "1234567890123456");
            paymentService.processPayment(payment);
            orderService.processPayment(order, payment);
            System.out.println("Payment processed: " + payment.getStatus());

            // Update order status
            orderService.updateOrderStatus(order.getId(), "SHIPPED");
            orderService.setOrderTracking(order.getId(), "TRK123456789");
            System.out.println("Order status updated to: " + order.getStatus());

            // Add product review
            Review review = new Review(1, user, laptop, 5, "Great laptop, very fast!");
            productService.addReview(laptop, review);
            System.out.println("Review added with rating: " + review.getRating());

            // Display user's orders
            List<Order> userOrders = orderService.getOrdersByUser(user);
            System.out.println("User has " + userOrders.size() + " orders");

        } catch (Exception e) {
            System.err.println("Error: " + e.getMessage());
        }
    }
}