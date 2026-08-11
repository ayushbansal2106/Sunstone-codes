/**
 * Represents a single product in the inventory.
 */
public class Product {
    private int id;
    private String name;
    private double price;
    private int quantity;

    // Constructor
    public Product(int id, String name, double price, int quantity) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.quantity = quantity;
    }

    // Getters and Setters
    public int getId() { return id; }
    public String getName() { return name; }
    public double getPrice() { return price; }
    public int getQuantity() { return quantity; }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    // Print product details
    public void printProduct() {
        System.out.println("ID: " + id + ", Name: " + name + ", Price: " + price + ", Quantity: " + quantity);
    }
}
