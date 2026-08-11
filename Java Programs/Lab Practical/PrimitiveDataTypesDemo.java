import java.util.Scanner;

public class PrimitiveDataTypesDemo {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter an integer value: ");
        int integerValue = scanner.nextInt();
        System.out.print("Enter a float value: ");
        float floatValue = scanner.nextFloat();
        System.out.print("Enter a character value: ");
        char charValue = scanner.next().charAt(0);
        System.out.print("Enter a boolean value (true/false): ");
        boolean booleanValue = scanner.nextBoolean();
        System.out.println("Integer value: " + integerValue);
        System.out.println("Float value: " + floatValue);
        System.out.println("Character value: " + charValue);
        System.out.println("Boolean value: " + booleanValue);
        scanner.close();
    }
}