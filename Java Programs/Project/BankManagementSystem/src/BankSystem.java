import java.util.*;

// This class manages the main menu and user interaction logic
public class BankSystem {
    private Scanner scanner = new Scanner(System.in);
    private Map<Integer, Account> accounts = new HashMap<>();
    private int nextAccountNumber = 1001;
    private final String adminUsername = "admin";
    private final String adminPassword = "admin123";

    public void start() {
        while (true) {
            System.out.println("\n--- Welcome to the Bank Management System ---");
            System.out.println("1. Admin Login");
            System.out.println("2. User Access");
            System.out.println("3. Exit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    adminLogin();
                    break;
                case 2:
                    userMenu();
                    break;
                case 3:
                    System.out.println("Thank you for using the Bank Management System!");
                    return;
                default:
                    System.out.println("Invalid choice. Try again.");
            }
        }
    }

    private void adminLogin() {
        System.out.print("Enter admin username: ");
        String username = scanner.nextLine();
        System.out.print("Enter admin password: ");
        String password = scanner.nextLine();

        if (username == adminUsername && password == adminPassword) {
            adminMenu();
        } else {
            System.out.println("\n -----Invalid credentials!-----");
        }
    }

    private void adminMenu() {
        while (true) {
            System.out.println("\n--- Admin Menu ---");
            System.out.println("1. View All Accounts");
            System.out.println("2. Apply Interest to Savings Accounts");
            System.out.println("3. Delete Account");
            System.out.println("4. Back to Main Menu");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    viewAllAccounts();
                    break;
                case 2:
                    applyInterest();
                    break;
                case 3:
                    deleteAccount();
                    break;
                case 4:
                    return;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }

    private void userMenu() {
        while (true) {
            System.out.println("\n--- User Menu ---");
            System.out.println("1. Create Account");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("4. Check Balance");
            System.out.println("5. View Transactions");
            System.out.println("6. Back to Main Menu");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    createAccount();
                    break;
                case 2:
                    deposit();
                    break;
                case 3:
                    withdraw();
                    break;
                case 4:
                    checkBalance();
                    break;
                case 5:
                    viewTransactions();
                    break;
                case 6:
                    return;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }

    private void createAccount() {
        System.out.print("Enter your name: ");
        String name = scanner.nextLine();
        System.out.print("Enter your age: ");
        int age = scanner.nextInt();
        scanner.nextLine();
        System.out.print("Enter your address: ");
        String address = scanner.nextLine();

        System.out.println("Select account type: 1. Savings  2. Current");
        int type = scanner.nextInt();
        scanner.nextLine();

        Account account;
        if (type == 1) {
            account = new SavingsAccount(nextAccountNumber, name, age, address);
        } else {
            account = new CurrentAccount(nextAccountNumber, name, age, address);
        }

        accounts.put(nextAccountNumber, account);
        System.out.println("Account created successfully! Your account number is: " + nextAccountNumber);
        nextAccountNumber++;
    }

    private Account getAccount() {
        System.out.print("Enter your account number: ");
        int accNo = scanner.nextInt();
        scanner.nextLine();

        Account acc = accounts.get(accNo);
        if (acc == null) {
            System.out.println("Account not found.");
        }
        return acc;
    }

    private void deposit() {
        Account acc = getAccount();
        if (acc != null) {
            System.out.print("Enter amount to deposit: ");
            double amount = scanner.nextDouble();
            scanner.nextLine();
            acc.deposit(amount);
        }
    }

    private void withdraw() {
        Account acc = getAccount();
        if (acc != null) {
            System.out.print("Enter amount to withdraw: ");
            double amount = scanner.nextDouble();
            scanner.nextLine();
            acc.withdraw(amount);
        }
    }

    private void checkBalance() {
        Account acc = getAccount();
        if (acc != null) {
            System.out.println("Your current balance is: " + acc.getBalance());
        }
    }

    private void viewTransactions() {
        Account acc = getAccount();
        if (acc != null) {
            acc.printTransactions();
        }
    }

    private void viewAllAccounts() {
        if (accounts.isEmpty()) {
            System.out.println("No accounts to display.");
            return;
        }
        for (Account acc : accounts.values()) {
            System.out.println(acc);
        }
    }

    private void applyInterest() {
        for (Account acc : accounts.values()) {
            acc.applyInterest();
        }
        System.out.println("Interest applied to all savings accounts.");
    }

    private void deleteAccount() {
        System.out.print("Enter account number to delete: ");
        int accNo = scanner.nextInt();
        scanner.nextLine();
        if (accounts.remove(accNo) != null) {
            System.out.println("Account deleted successfully.");
        } else {
            System.out.println("Account not found.");
        }
    }
}