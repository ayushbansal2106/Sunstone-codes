import java.util.*;

public class SwapWithoutTemp
{
    public static void main(String[] args)
    {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value of variable a: ");
        int a = scanner.nextInt();
        System.out.print("Enter the value of variable b: ");
        int b = scanner.nextInt();
        System.out.println("Before swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        a = a + b;
        b = a - b;
        a = a - b;
        System.out.println("After swapping:");
        System.out.println("a = " + a);
        System.out.println("b = " + b);
        scanner.close();
    }
}