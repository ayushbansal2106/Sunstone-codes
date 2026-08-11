package Patterns;

import java.util.Scanner;

public class FloydTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int m = sc.nextInt();
        int k = 1;

        for (int i = 1; i <= m; i++) {
            for(int j = 1; j <= i; j++){
                System.out.print(k+" ");
                k++;
            }
            System.out.println();
        }
        sc.close();
    }
}
