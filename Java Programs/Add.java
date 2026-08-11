import java.util.*;

public class Add {
  int addNumber(int a, int b){
    return a + b;
  }
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    Add add = new Add();
    System.out.print("Enter number 1: ");
    int a = sc.nextInt();
    System.out.print("Enter number 2: ");
    int b = sc.nextInt();
    System.out.println("Sum is: "+ add.addNumber(a, b));
    sc.close();
  }
}
