import java.util.Scanner;

public class NaturalNumbersSum {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number n: ");
        int n = scanner.nextInt();

        int sum = 0;

        if (n <= 0) {
            System.out.println("Please enter a number greater than 0.");
        } else {
            
            System.out.println("The first " + n + " natural numbers are:");
            for (int i = 1; i <= n; i++) {
                System.out.print(i + " "); 
                sum = sum + i; 
            }

            System.out.println("\nThe sum of the first " + n + " natural numbers is: " + sum);
        }
        
        scanner.close();
    }
}
