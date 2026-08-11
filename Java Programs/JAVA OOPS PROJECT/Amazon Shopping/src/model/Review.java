package model;

import java.util.Date;

public class Review {
    private int id;
    private User user;
    private Product product;
    private int rating;
    private String comment;
    private Date reviewDate;

    public Review(int id, User user, Product product, int rating, String comment) {
        this.id = id;
        this.user = user;
        this.product = product;
        this.rating = rating;
        this.comment = comment;
        this.reviewDate = new Date();
    }

    public int getId() {
        return id;
    }

    public User getUser() {
        return user;
    }

    public Product getProduct() {
        return product;
    }

    public int getRating() {
        return rating;
    }

    public String getComment() {
        return comment;
    }

    public Date getReviewDate() {
        return reviewDate;
    }

    public void setRating(int rating) {
        this.rating = rating;
    }

    public void setComment(String comment) {
        this.comment = comment;
    }
} 