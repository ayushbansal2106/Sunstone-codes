package service;

import model.Payment;
import model.Order;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.HashMap;
import java.util.stream.Collectors;

public class PaymentService {
    private Map<Integer, Payment> payments;
    private int nextPaymentId;

    public PaymentService() {
        this.payments = new HashMap<>();
        this.nextPaymentId = 1;
    }

    public Payment createPayment(Order order, String method, String cardNumber) {
        Payment payment = new Payment(nextPaymentId++, order, method, cardNumber);
        payments.put(payment.getId(), payment);
        return payment;
    }

    public Payment getPaymentById(int id) {
        return payments.get(id);
    }

    public List<Payment> getPaymentsByOrder(Order order) {
        return payments.values().stream()
                .filter(payment -> payment.getOrder().equals(order))
                .collect(Collectors.toList());
    }

    public List<Payment> getPaymentsByStatus(String status) {
        return payments.values().stream()
                .filter(payment -> payment.getStatus().equals(status))
                .collect(Collectors.toList());
    }

    public void processPayment(Payment payment) {
        // Simulate payment processing
        try {
            Thread.sleep(1000); // Simulate network delay
            payment.setStatus("COMPLETED");
        } catch (InterruptedException e) {
            payment.setStatus("FAILED");
        }
    }

    public boolean validatePaymentMethod(String method, String cardNumber) {
        // Basic validation
        if (method == null || cardNumber == null) {
            return false;
        }

        switch (method.toUpperCase()) {
            case "CREDIT_CARD":
            case "DEBIT_CARD":
                return cardNumber.matches("\\d{16}");
            case "UPI":
                return cardNumber.matches("[a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+");
            default:
                return false;
        }
    }

    public void refundPayment(Payment payment) {
        if (payment.getStatus().equals("COMPLETED")) {
            payment.setStatus("REFUNDED");
        }
    }

    public List<Payment> getAllPayments() {
        return new ArrayList<>(payments.values());
    }
} 