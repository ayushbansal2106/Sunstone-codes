package service;

import model.Product;
import model.Review;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.stream.Collectors;

public class ProductService {
    private Map<Integer, Product> products;
    private int nextProductId;

    public ProductService() {
        this.products = new HashMap<>();
        this.nextProductId = 1;
    }

    public Product addProduct(String name, String description, double price, int stock, String category) {
        Product product = new Product(nextProductId++, name, description, price, stock, category);
        products.put(product.getId(), product);
        return product;
    }

    public Product getProductById(int id) {
        return products.get(id);
    }

    public List<Product> getAllProducts() {
        return new ArrayList<>(products.values());
    }

    public List<Product> getProductsByCategory(String category) {
        return products.values().stream()
                .filter(product -> product.getCategory().equals(category))
                .collect(Collectors.toList());
    }

    public List<Product> searchProducts(String query) {
        String lowerQuery = query.toLowerCase();
        return products.values().stream()
                .filter(product -> 
                    product.getName().toLowerCase().contains(lowerQuery) ||
                    product.getDescription().toLowerCase().contains(lowerQuery))
                .collect(Collectors.toList());
    }

    public void updateStock(int productId, int quantity) {
        Product product = products.get(productId);
        if (product != null) {
            product.updateStock(quantity);
        }
    }

    public void addReview(Product product, Review review) {
        product.addReview(review);
    }

    public List<Review> getProductReviews(Product product) {
        return product.getReviews();
    }

    public double getAverageRating(Product product) {
        List<Review> reviews = product.getReviews();
        if (reviews.isEmpty()) {
            return 0.0;
        }
        return reviews.stream()
                .mapToInt(Review::getRating)
                .average()
                .orElse(0.0);
    }
} 