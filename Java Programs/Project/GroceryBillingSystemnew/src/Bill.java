import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.util.Random;

/**
 * Represents a bill and handles billing logic.
 */
public class Bill implements TaxCalculator {
    private int[] productIds;
    private int[] quantities;
    private int count;
    private double subtotal;
    private double tax;
    private double total;
    private String timestamp;
    private int billId;

    public Bill() {
        productIds = new int[50];
        quantities = new int[50];
        count = 0;
        subtotal = 0;
    }

    public void addProduct(Product product, int quantity) {
        if (product.getQuantity() < quantity) {
            System.out.println("Not enough stock for product: " + product.getName());
            return;
        }

        // Update stock
        product.setQuantity(product.getQuantity() - quantity);

        // Add to bill
        productIds[count] = product.getId();
        quantities[count] = quantity;
        subtotal += product.getPrice() * quantity;
        count++;
    }

    public void generateBill(Inventory inventory) {
        tax = calculateTax(subtotal);
        total = subtotal + tax;

        // Generate timestamp and bill ID
        timestamp = LocalDateTime.now().format(DateTimeFormatter.ofPattern("dd-MM-yyyy HH:mm:ss"));
        billId = 10000 + new Random().nextInt(90000);

        // Print receipt
        System.out.println("\n========== Receipt ==========");
        System.out.println("Bill ID: " + billId);
        System.out.println("Timestamp: " + timestamp);
        System.out.println("-------------------------------");
        for (int i = 0; i < count; i++) {
            Product p = inventory.findProductById(productIds[i]);
            if (p != null) {
                System.out.printf("%s x %d = ₹%.2f\n", p.getName(), quantities[i], p.getPrice() * quantities[i]);
            }
        }
        System.out.println("-------------------------------");
        System.out.printf("Subtotal: ₹%.2f\n", subtotal);
        System.out.printf("Tax (18%%): ₹%.2f\n", tax);
        System.out.printf("Total: ₹%.2f\n", total);
        System.out.println("===============================\n");
    }

    @Override
    public double calculateTax(double amount) {
        return amount * TAX_RATE;
    }
}
