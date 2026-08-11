import java.util.*;

public class array {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int arr[] = new int[5];
    for (int i = 0; i < arr.length; i++) {
      arr[i] = sc.nextInt();
    }
    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
    System.out.println();
    arr[2] = arr[2]-arr[3];
    arr[3] = arr[2]+arr[3];
    arr[2] = arr[3]-arr[2];

    for (int i = 0; i < arr.length; i++) {
      System.out.print(arr[i] + " ");
    }
  }
}
