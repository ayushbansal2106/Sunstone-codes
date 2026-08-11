package Patterns;

import java.util.Scanner;

public class HollowRectangle {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int m = sc.nextInt();
        System.out.print("\nEnter the number of columns: ");
        int n = sc.nextInt();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++){
                if(i == 0 || i == n-1 || j == 0 || j == m-1){
                    System.out.print("* ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();  
        }
    sc.close();
    }
}
