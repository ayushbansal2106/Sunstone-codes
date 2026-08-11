import java.util.*;

public class Position{
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int x = sc.nextInt();
    int y = sc.nextInt();
    int z = sc.nextInt();
    sc.close();

    int dist1 = Math.abs(z-x);
    int dist2 = Math.abs(z-y);
    if (dist1==dist2) {
      System.out.println("0");
    }else if(dist1>dist2){
      System.out.println("y");
    }else{
      System.out.println("x");
    }
  }
}