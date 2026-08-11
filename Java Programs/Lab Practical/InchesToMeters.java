import java.util.Scanner;

public class InchesToMeters {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the value in inches: ");
        double inches = scanner.nextInt();
        double meter;
        meter = inches * 0.0254;
        System.out.println(inches+" inches is "+meter+" meters");
       scanner.close();
    }
}
