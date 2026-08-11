import java.util.Scanner;

public class LargestSmallest {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);        
        System.out.println("Enter the first number: ");
        int num1 = scanner.nextInt();
        System.out.println("Enter the second number: ");
        int num2 = scanner.nextInt();
        System.out.println("Enter the third number: ");
        int num3 = scanner.nextInt();
        int largest = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
        int smallest = (num1 < num2) ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
        System.out.println("The largest number is: " + largest);
        System.out.println("\nThe smallest number is: " + smallest);
        
        scanner.close();
    }
}
