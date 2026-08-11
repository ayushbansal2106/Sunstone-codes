/**
 * Manages an array-based inventory of products.
 */
public class Inventory {
    private Product[] products;
    private int size;

    public Inventory() {
        products = new Product[100]; // Max 100 products
        size = 0;
    }

    public void addProduct(int id, String name, double price, int quantity) {
        for (int i = 0; i < size; i++) {
            if (products[i].getId() == id) {
                System.out.println("Product ID already exists.");
                return;
            }
        }
        products[size++] = new Product(id, name, price, quantity);
        System.out.println("Product added successfully.");
    }

    public void removeProduct(int id) {
        for (int i = 0; i < size; i++) {
            if (products[i].getId() == id) {
                for (int j = i; j < size - 1; j++) {
                    products[j] = products[j + 1];
                }
                products[--size] = null;
                System.out.println("Product removed.");
                return;
            }
        }
        System.out.println("Product ID not found.");
    }

    public void displayInventory() {
        if (size == 0) {
            System.out.println("Inventory is empty.");
            return;
        }
        for (int i = 0; i < size; i++) {
            products[i].printProduct();
        }
    }

    public Product findProductById(int id) {
        for (int i = 0; i < size; i++) {
            if (products[i].getId() == id) {
                return products[i];
            }
        }
        return null;
    }
}
