package model;

import java.util.ArrayList;
import java.util.List;

public class User {
    private int id;
    private String username;
    private String password;
    private String email;
    private List<Address> addresses;
    private List<Order> orders;

    public User(int id, String username, String password, String email) {
        this.id = id;
        this.username = username;
        this.password = password;
        this.email = email;
        this.addresses = new ArrayList<>();
        this.orders = new ArrayList<>();
    }

    public int getId() {
        return id;
    }

    public String getUsername() {
        return username;
    }

    public String getPassword() {
        return password;
    }

    public String getEmail() {
        return email;
    }

    public List<Address> getAddresses() {
        return addresses;
    }

    public List<Order> getOrders() {
        return orders;
    }

    public void addAddress(Address address) {
        addresses.add(address);
    }

    public void addOrder(Order order) {
        orders.add(order);
    }
} 