import java.util.Scanner;

public class BitwiseOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first integer: ");
        int num1 = scanner.nextInt();
        System.out.println("Enter the second integer: ");
        int num2 = scanner.nextInt();
        int and = num1 & num2;
        int or = num1 | num2;
        int xor = num1 ^ num2;
        System.out.println("Bitwise AND: " + and);
        System.out.println("Bitwise OR: " + or);
        System.out.println("Bitwise XOR: " + xor);
        
        scanner.close();
    }
}
