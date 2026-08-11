// Bill.java
// Handles bill generation and printing

import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Random;

public class Bill implements TaxCalculator {
    private String billId;
    private LocalDateTime timestamp;
    private Map<Product, Integer> purchasedItems;
    private double subtotal;

    public Bill() {
        this.billId = generateBillId();
        this.timestamp = LocalDateTime.now();
        this.purchasedItems = new LinkedHashMap<>();
        this.subtotal = 0.0;
    }

    private String generateBillId() {
        Random rand = new Random();
        int id = 10000 + rand.nextInt(90000); // 5-digit ID
        return String.valueOf(id);
    }

    public void addProduct(Product product, int quantity) {
        if (product.getQuantity() < quantity) {
            System.out.println("Insufficient stock for product: " + product.getName());
            return;
        }
        purchasedItems.put(product, quantity);
        subtotal += product.getTotalPrice(quantity);
        product.setQuantity(product.getQuantity() - quantity);
    }

    public void printReceipt() {
        System.out.println("=========== GROCERY STORE RECEIPT ===========");
        System.out.println("Bill ID   : " + billId);
        System.out.println("Timestamp : " + timestamp.format(DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm:ss")));
        System.out.println("---------------------------------------------");
        System.out.printf("%-20s %-10s %-10s %-10s%n", "Product", "Qty", "Price", "Total");

        for (Map.Entry<Product, Integer> entry : purchasedItems.entrySet()) {
            Product p = entry.getKey();
            int qty = entry.getValue();
            double totalPrice = p.getTotalPrice(qty);
            System.out.printf("%-20s %-10d %-10.2f %-10.2f%n",
                p.getName(), qty, p.getPrice(), totalPrice);
        }

        double tax = calculateTax(subtotal);
        double total = subtotal + tax;

        System.out.println("---------------------------------------------");
        System.out.printf("Subtotal: INR %.2f%n", subtotal);
        System.out.printf("Tax (18%%): INR %.2f%n", tax);
        System.out.printf("Total: INR %.2f%n", total);
        System.out.println("=============================================");
    }
}