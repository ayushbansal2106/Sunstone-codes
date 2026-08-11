// Inventory.java
// Manages products in the inventory

import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class Inventory {
    private List<Product> products;

    public Inventory() {
        products = new ArrayList<>();
    }

    public void addProduct(Product product) {
        products.add(product);
    }

    public boolean removeProductById(String id) {
        Iterator<Product> iterator = products.iterator();
        while (iterator.hasNext()) {
            Product product = iterator.next();
            if (product.getId().equals(id)) {
                iterator.remove();
                return true;
            }
        }
        return false;
    }

    public Product getProductById(String id) {
        for (Product product : products) {
            if (product.getId().equals(id)) {
                return product;
            }
        }
        return null;
    }

    public void displayProducts() {
        System.out.printf("%-10s %-20s %-10s %-10s%n", "ID", "Name", "Price(INR)", "Quantity");
        for (Product product : products) {
            System.out.printf("%-10s %-20s %-10.2f %-10d%n",
                product.getId(), product.getName(), product.getPrice(), product.getQuantity());
        }
    }
}