import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Inventory inventory = new Inventory();

        while (true) {
            System.out.println("\n===== Grocery Billing Menu =====");
            System.out.println("1. Add Product");
            System.out.println("2. Remove Product");
            System.out.println("3. View Inventory");
            System.out.println("4. Create Bill");
            System.out.println("5. Exit");
            System.out.print("Choose an option: ");

            int choice = sc.nextInt();
            sc.nextLine();

            switch (choice) {
                case 1:
                    // Add product
                    System.out.print("Enter Product ID: ");
                    int id = sc.nextInt();
                    sc.nextLine();
                    System.out.print("Enter Product Name: ");
                    String name = sc.nextLine();
                    System.out.print("Enter Price: ");
                    double price = sc.nextDouble();
                    System.out.print("Enter Quantity: ");
                    int quantity = sc.nextInt();
                    inventory.addProduct(id, name, price, quantity);
                    break;

                case 2:
                    // Remove product
                    System.out.print("Enter Product ID to remove: ");
                    int removeId = sc.nextInt();
                    inventory.removeProduct(removeId);
                    break;

                case 3:
                    // Display inventory
                    inventory.displayInventory();
                    break;

                case 4:
                    // Create bill
                    Bill bill = new Bill();
                    while (true) {
                        System.out.print("Enter Product ID to buy (0 to finish): ");
                        int productId = sc.nextInt();
                        if (productId == 0) break;
                        System.out.print("Enter Quantity: ");
                        int qty = sc.nextInt();

                        Product product = inventory.findProductById(productId);
                        if (product != null) {
                            bill.addProduct(product, qty);
                        } else {
                            System.out.println("Product not found.");
                        }
                    }
                    bill.generateBill(inventory);
                    break;

                case 5:
                    // Exit
                    System.out.println("Exiting...");
                    sc.close();
                    return;

                default:
                    System.out.println("Invalid option. Please try again.");
            }
        }
    }
}
