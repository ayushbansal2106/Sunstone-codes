package service;

import model.User;
import model.Address;
import model.Order;
import java.util.ArrayList;
import java.util.List;
import java.util.HashMap;
import java.util.Map;

public class UserService {
    private Map<String, User> users;
    private int nextUserId;

    public UserService() {
        this.users = new HashMap<>();
        this.nextUserId = 1;
    }

    public User registerUser(String username, String password, String email) {
        if (users.containsKey(username)) {
            throw new IllegalArgumentException("Username already exists");
        }

        User user = new User(nextUserId++, username, password, email);
        users.put(username, user);
        return user;
    }

    public User loginUser(String username, String password) {
        User user = users.get(username);
        if (user == null || !user.getPassword().equals(password)) {
            throw new IllegalArgumentException("Invalid username or password");
        }
        return user;
    }

    public void addAddress(User user, Address address) {
        user.addAddress(address);
    }

    public void addOrder(User user, Order order) {
        user.addOrder(order);
    }

    public List<Order> getUserOrders(User user) {
        return user.getOrders();
    }

    public List<Address> getUserAddresses(User user) {
        return user.getAddresses();
    }

    public User getUserByUsername(String username) {
        return users.get(username);
    }

    public List<User> getAllUsers() {
        return new ArrayList<>(users.values());
    }
} 