import java.util.Scanner;

public class Swap {
  public static void swapWithThirtVariable(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    System.out.println("a: "+a+" b: "+b );
  }

  public static void swapWithoutThirdVariable(int a, int b){
    a=a-b;
    b=a+b;
    a=b-a;

    // a=a+b;
    // b=a-b;
    // a=a-b;
    System.out.println("a: "+a+" b: "+b );
  }

  public static void main(String[] args) {
    // Scanner sc = new Scanner(System.in);
    // int a = sc.nextInt();
    // int b = sc.nextInt();
    // sc.close();

    int a = 75;
    int b = 25;
    System.out.println("a: "+a+" b: "+b );
    swapWithThirtVariable(a, b);
    swapWithoutThirdVariable(a, b);
  }
}
