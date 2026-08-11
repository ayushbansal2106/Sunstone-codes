import java.util.*;
;
public class oddEven {

  public static boolean oddEvenCheck(int num) {
    // num%2 == 0 ? return 0 : return 1;
    return num%2 == 0 ? true : false;
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter a number: ");
    int num = sc.nextInt();
    System.out.println(oddEvenCheck(num)?"Number is even":"Number is odd");
    sc.close();
  }
}

// a % b = a -(a/b) * b