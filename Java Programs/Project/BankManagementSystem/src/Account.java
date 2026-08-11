import java.util.*;

// Abstract base class for all account types
public abstract class Account {
    protected int accountNumber;
    protected String name;
    protected int age;
    protected String address;
    protected double balance;
    protected List<String> transactions = new ArrayList<>();

    public Account(int accountNumber, String name, int age, String address) {
        this.accountNumber = accountNumber;
        this.name = name;
        this.age = age;
        this.address = address;
        this.balance = 0.0;
    }

    public void deposit(double amount) {
        balance += amount;
        transactions.add("Deposited: $" + amount);
        System.out.println("Deposit successful!");
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            transactions.add("Withdrew: $" + amount);
            System.out.println("Withdrawal successful!");
        } else {
            System.out.println("Insufficient funds!");
        }
    }

    public double getBalance() {
        return balance;
    }

    public void printTransactions() {
        if (transactions.isEmpty()) {
            System.out.println("No transactions yet.");
        } else {
            System.out.println("Transaction History:");
            for (String t : transactions) {
                System.out.println(t);
            }
        }
    }

    public abstract void applyInterest();

    @Override
    public String toString() {
        return accountNumber + " - " + name + " (" + this.getClass().getSimpleName() + ") - Balance: $" + balance;
    }
}