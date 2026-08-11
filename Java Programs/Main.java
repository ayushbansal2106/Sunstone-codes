import java.util.*;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        System.out.print((num%400==0||num%4==0 && num%100!=0)?"Leap Year":"Not a Leap Year:Not a Leap Year");
        sc.close();
    }
}