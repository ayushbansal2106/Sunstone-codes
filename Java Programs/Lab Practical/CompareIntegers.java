import java.util.Scanner;

public class CompareIntegers {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the first integer: ");
        int a = scanner.nextInt();
        System.out.println("Enter the second integer: ");
        int b = scanner.nextInt();
        if(a==b){
            System.out.println("The integers are equal.");
        }
        else{
            System.out.println("The integers are not equal.");
        }
        scanner.close();
    }
}
