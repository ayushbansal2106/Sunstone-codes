public abstract class Account {
    public int accountNumber;
    protected String name;
    protected int age;
    protected String address;
    protected double balance;

    public Account(int accNo, String name, int age, String address) {
        this.accountNumber = accNo;
        this.name = name;
        this.age = age;
        this.address = address;
        this.balance = 0.0;
    }

    public void deposit(double amount) {
        balance += amount;
        System.out.println("Deposited $" + amount);
    }

    public void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            System.out.println("Withdrew $" + amount);
        } else {
            System.out.println("Insufficient balance.");
        }
    }

    public double getBalance() {
        return balance;
    }

    public abstract void applyInterest();

    public String toString() {
        return accountNumber + ": " + name + " (" + getClass().getSimpleName() + ") - $" + balance;
    }
}