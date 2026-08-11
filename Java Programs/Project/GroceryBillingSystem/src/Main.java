import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Inventory inventory = new Inventory();

        while (true) {
            System.out.println("\n===== Grocery Store Billing System =====");
            System.out.println("1. Add Product");
            System.out.println("2. Remove Product");
            System.out.println("3. View Inventory");
            System.out.println("4. Generate Bill");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter Product ID: ");
                    String id = scanner.nextLine();
                    System.out.print("Enter Product Name: ");
                    String name = scanner.nextLine();
                    System.out.print("Enter Product Price (INR): ");
                    double price = scanner.nextDouble();
                    System.out.print("Enter Quantity: ");
                    int qty = scanner.nextInt();
                    scanner.nextLine();
                    inventory.addProduct(new Product(id, name, price, qty));
                    break;
                case 2:
                    System.out.print("Enter Product ID to remove: ");
                    String removeId = scanner.nextLine();
                    boolean removed = inventory.removeProductById(removeId);
                    System.out.println(removed ? "Product removed." : "Product not found.");
                    break;
                case 3:
                    inventory.displayProducts();
                    break;
                case 4:
                    Bill bill = new Bill();
                    while (true) {
                        System.out.print("Enter Product ID to add to bill (or 'done' to finish): ");
                        String billId = scanner.nextLine();
                        if (billId.equalsIgnoreCase("done")) break;
                        Product product = inventory.getProductById(billId);
                        if (product == null) {
                            System.out.println("Product not found.");
                            continue;
                        }
                        System.out.print("Enter quantity: ");
                        int quantity = scanner.nextInt();
                        scanner.nextLine();
                        bill.addProduct(product, quantity);
                    }
                    bill.printReceipt();
                    break;
                case 5:
                    System.out.println("Exiting system. Goodbye!");
                    scanner.close();
                    return;
                default:
                    System.out.println("Invalid choice.");
            }
        }
    }
}