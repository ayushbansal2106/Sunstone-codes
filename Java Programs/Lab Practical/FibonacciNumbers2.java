import java.util.Scanner;

public class FibonacciNumbers2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = 0, b = 1, result;
        int n = sc.nextInt();
        System.out.println("First 10 Fibonacci numbers:");
        System.out.print("Series: ");
        for (int i = 0; i < n; i++)
        {
            System.out.print(a+" ");
            result = a + b;
            a = b;
            b = result;
        }
        sc.close();
    }
}
