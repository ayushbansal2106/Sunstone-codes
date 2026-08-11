package model;

import java.util.ArrayList;
import java.util.List;

public class Product {
    private int id;
    private String name;
    private String description;
    private double price;
    private int stock;
    private String category;
    private List<Review> reviews;

    public Product(int id, String name, String description, double price, int stock, String category) {
        this.id = id;
        this.name = name;
        this.description = description;
        this.price = price;
        this.stock = stock;
        this.category = category;
        this.reviews = new ArrayList<>();
    }

    public int getId() {
        return id;
    }

    public String getName() {
        return name;
    }

    public String getDescription() {
        return description;
    }

    public double getPrice() {
        return price;
    }

    public int getStock() {
        return stock;
    }

    public String getCategory() {
        return category;
    }

    public List<Review> getReviews() {
        return reviews;
    }

    public void updateStock(int quantity) {
        this.stock += quantity;
    }

    public void addReview(Review review) {
        reviews.add(review);
    }

    // Calculate average rating
    public double getAverageRating() {
        if (reviews.isEmpty()) {
            return 0.0;
        }
        double sum = reviews.stream()
                .mapToDouble(Review::getRating)
                .sum();
        return sum / reviews.size();
    }
} 