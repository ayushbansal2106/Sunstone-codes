import java.util.Scanner;

public class BasicArithmeticOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first number:");
     float a = scanner.nextFloat();
     System.out.println("Enter the second number:");
     float b = scanner.nextFloat();
     float Addition = a+b;
     float Subtraction = a-b;
     float Multiplication = a*b;
     float Division = a/b;
     
     System.out.println("Addition: " + a + " + " + b + " = " + Addition);
     System.out.println("Subtraction: " + a + " - " + b + " = " + Subtraction);
     System.out.println("Multiplication: " + a + " * " + b + " = " + Multiplication);
     System.out.println("Division: " + a + " / " + b + " = " + Division);
     scanner.close();
    }
}
