import java.util.*;
public class simplentrest {
  public static double interestCalculation(double p, double r, double t){
    return (p*r*t)/100;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);

    double p,r,t;
    System.out.print("Enter principal amount: ");
    p=sc.nextDouble();
    System.out.print("Enter rate of interest: ");
    r=sc.nextDouble();
    System.out.print("Enter time period: ");
    t=sc.nextDouble();

    System.out.println("Simple interest: " + interestCalculation(p, r, t));
    System.out.println("Final amout to take: " + (p+interestCalculation(p, r, t)));
    sc.close();
  }
}
