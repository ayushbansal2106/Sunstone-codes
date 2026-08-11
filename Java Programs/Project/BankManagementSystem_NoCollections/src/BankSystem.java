import java.util.Scanner;

public class BankSystem {
    private Scanner scanner = new Scanner(System.in);
    private Account[] accounts = new Account[100]; // Array for storing accounts
    private int accountCount = 0;
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
                case 1 -> adminLogin();
                case 2 -> userMenu();
                case 3 -> {
                    System.out.println("Thank you for using the Bank Management System!");
                    return;
                }
                default -> System.out.println("Invalid choice. Try again.");
            }
        }
    }

    private void adminLogin() {
        System.out.print("Enter admin username: ");
        String username = scanner.nextLine();
        System.out.print("Enter admin password: ");
        String password = scanner.nextLine();

        if (username.equals(adminUsername) && password.equals(adminPassword)) {
            adminMenu();
        } else {
            System.out.println("Invalid credentials!");
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
                case 1 -> viewAllAccounts();
                case 2 -> applyInterest();
                case 3 -> deleteAccount();
                case 4 -> { return; }
                default -> System.out.println("Invalid choice.");
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
            System.out.println("5. Back to Main Menu");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1 -> createAccount();
                case 2 -> deposit();
                case 3 -> withdraw();
                case 4 -> checkBalance();
                case 5 -> { return; }
                default -> System.out.println("Invalid choice.");
            }
        }
    }

    private void createAccount() {
        if (accountCount >= accounts.length) {
            System.out.println("Bank is at full capacity.");
            return;
        }

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

        Account account = (type == 1) ? new SavingsAccount(nextAccountNumber, name, age, address)
                                      : new CurrentAccount(nextAccountNumber, name, age, address);

        accounts[accountCount++] = account;
        System.out.println("Account created successfully! Account No: " + nextAccountNumber);
        nextAccountNumber++;
    }

    private Account findAccount(int accNo) {
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].accountNumber == accNo) return accounts[i];
        }
        return null;
    }

    private void deposit() {
        System.out.print("Enter account number: ");
        int accNo = scanner.nextInt();
        scanner.nextLine();
        Account acc = findAccount(accNo);
        if (acc != null) {
            System.out.print("Enter deposit amount: ");
            double amt = scanner.nextDouble();
            acc.deposit(amt);
        } 
        else System.out.println("Account not found.");
    }

    private void withdraw() {
        System.out.print("Enter account number: ");
        int accNo = scanner.nextInt();
        scanner.nextLine();
        Account acc = findAccount(accNo);
        if (acc != null) {
            System.out.print("Enter withdraw amount: ");
            double amt = scanner.nextDouble();
            acc.withdraw(amt);
        } else System.out.println("Account not found.");
    }

    private void checkBalance() {
        System.out.print("Enter account number: ");
        int accNo = scanner.nextInt();
        scanner.nextLine();
        Account acc = findAccount(accNo);
        if (acc != null) {
            System.out.println("Balance: $" + acc.getBalance());
        } else System.out.println("Account not found.");
    }

    private void viewAllAccounts() {
        if (accountCount == 0) System.out.println("No accounts found.");
        for (int i = 0; i < accountCount; i++) System.out.println(accounts[i]);
    }

    private void applyInterest() {
        for (int i = 0; i < accountCount; i++) accounts[i].applyInterest();
        System.out.println("Interest applied to all applicable accounts.");
    }

    private void deleteAccount() {
        System.out.print("Enter account number to delete: ");
        int accNo = scanner.nextInt();
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].accountNumber == accNo) {
                accounts[i] = accounts[--accountCount];
                System.out.println("Account deleted.");
                return;
            }
        }
        System.out.println("Account not found.");
    }
}