import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ParkingLot parkingLot = null;

        while (true) {
            System.out.println("\nWelcome to the Parking Lot System");
            System.out.println("1. Admin");
            System.out.println("2. User");
            System.out.println("3. Exit");
            System.out.print("Enter role: ");
            int choice = scanner.nextInt();

            switch (choice) {
                case 1: // Admin
                    System.out.print("Enter number of levels: ");
                    int levels = scanner.nextInt();
                    System.out.print("Enter number of slots per level: ");
                    int slots = scanner.nextInt();
                    System.out.print("Enter per-minute rate: ");
                    float rate = scanner.nextFloat();
                    parkingLot = new ParkingLot(levels, slots, rate);
                    System.out.println("Parking lot initialized successfully.");
                    break;

                case 2: // User
                    if (parkingLot == null) {
                        System.out.println("Parking lot not initialized yet by admin.");
                        break;
                    }

                    System.out.println("1. Park Vehicle");
                    System.out.println("2. Leave Parking");
                    System.out.print("Enter your choice: ");
                    int userChoice = scanner.nextInt();

                    switch (userChoice) {
                        case 1:
                            System.out.println("Enter Vehicle Type (Car/Bike/Bus): ");
                            String type = scanner.next();
                            System.out.print("Enter vehicle number: ");
                            String number = scanner.next();
                            Vehicle v = switch (type.toLowerCase()) {
                                case "car" -> new Car(number);
                                case "bike" -> new Bike(number);
                                case "bus" -> new Bus(number);
                                default -> null;
                            };

                            if (v == null) {
                                System.out.println("Invalid vehicle type.");
                                break;
                            }

                            Ticket ticket = parkingLot.parkVehicle(v);
                            if (ticket != null) {
                                System.out.println("Vehicle parked successfully!");
                                System.out.println("Ticket ID: " + ticket.getTicketId());
                                System.out.println("Parked at: " + ticket.getSlot());
                            } else {
                                System.out.println("Sorry, no slots available.");
                            }
                            break;

                        case 2:
                            System.out.print("Enter your ticket ID: ");
                            scanner.nextLine(); // consume newline
                            String ticketId = scanner.nextLine();
                            if (parkingLot.isValidTicket(ticketId)) {
                                float fee = parkingLot.leaveParking(ticketId);
                                System.out.printf("Thank you. Please pay ₹%.2f%n", fee);
                            } else {
                                System.out.println("Invalid ticket ID.");
                            }
                            break;
                    }
                    break;

                case 3:
                    System.out.println("Exiting... Goodbye!");
                    return;

                default:
                    System.out.println("Invalid option.");
            }
        }
    }
}
