import java.util.Scanner;
public class ayush{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the value of variable a: ");
        int a = scanner.nextInt();
        System.out.println("Enter the value of variable b: ");
        int b = scanner.nextInt();
        char c = scanner.next().charAt(0);
        String d = scanner.nextLine();
        // int c= a+b;
        System.out.printf("The sum: %.2f",(double)(a+b)/2);
        System.out.println(c);
        System.out.println(d);

        scanner.close();
    }
}