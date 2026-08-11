import java.util.Scanner;

public class StudentResult {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter Roll Number: ");
        int rollNumber = scanner.nextInt();
        scanner.nextLine(); 
        System.out.print("Enter Name: ");
        String name = scanner.nextLine();
        System.out.print("Enter marks for Subject 1: ");
        int marks1 = scanner.nextInt();
        
        System.out.print("Enter marks for Subject 2: ");
        int marks2 = scanner.nextInt();
        
        System.out.print("Enter marks for Subject 3: ");
        int marks3 = scanner.nextInt();
        int totalMarks = marks1 + marks2 + marks3;
        double percentage = (totalMarks / 300.0) * 100;
        String division;
        if (percentage >= 60) {
            division = "First Division";
        } else if (percentage >= 50) {
            division = "Second Division";
        } else if (percentage >= 40) {
            division = "Third Division";
        } else {
            division = "Fail";
        }

        System.out.println("\nStudent Result");
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Name: " + name);
        System.out.println("Total Marks: " + totalMarks + "/300");
        System.out.println("Percentage: " + percentage + "%");
        System.out.println("Division: " + division);

        scanner.close();
    }
}
