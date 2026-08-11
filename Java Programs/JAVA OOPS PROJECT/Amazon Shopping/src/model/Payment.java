package model;

import java.util.Date;

public class Payment {
    private int id;
    private Order order;
    private String method;
    private String cardNumber;
    private String status;
    private Date paymentDate;
    private double amount;

    public Payment(int id, Order order, String method, String cardNumber) {
        this.id = id;
        this.order = order;
        this.method = method;
        this.cardNumber = cardNumber;
        this.status = "PENDING";
        this.paymentDate = new Date();
        this.amount = order.getTotal();
    }

    public int getId() {
        return id;
    }

    public Order getOrder() {
        return order;
    }

    public String getMethod() {
        return method;
    }

    public String getCardNumber() {
        return cardNumber;
    }

    public String getStatus() {
        return status;
    }

    public Date getPaymentDate() {
        return paymentDate;
    }

    public double getAmount() {
        return amount;
    }

    public void setStatus(String status) {
        this.status = status;
    }
} 