package model;

import java.util.ArrayList;
import java.util.List;

public class ShoppingCart {
    private List<CartItem> items;

    public ShoppingCart() {
        this.items = new ArrayList<>();
    }

    public List<CartItem> getItems() {
        return items;
    }

    public void addItem(Product product, int quantity) {
        CartItem existingItem = findItem(product.getId());
        if (existingItem != null) {
            existingItem.setQuantity(existingItem.getQuantity() + quantity);
        } else {
            items.add(new CartItem(product, quantity));
        }
    }

    public void updateQuantity(int productId, int quantity) {
        CartItem item = findItem(productId);
        if (item != null) {
            if (quantity <= 0) {
                removeItem(productId);
            } else {
                item.setQuantity(quantity);
            }
        }
    }

    public void removeItem(int productId) {
        items.removeIf(item -> item.getProduct().getId() == productId);
    }

    public double getTotal() {
        return items.stream()
                .mapToDouble(item -> item.getProduct().getPrice() * item.getQuantity())
                .sum();
    }

    private CartItem findItem(int productId) {
        return items.stream()
                .filter(item -> item.getProduct().getId() == productId)
                .findFirst()
                .orElse(null);
    }
} 