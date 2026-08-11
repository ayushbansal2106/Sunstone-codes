package Patterns;

import java.util.Scanner;

public class RightTriangleFlipedRight {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int m = sc.nextInt();

        for (int i = 1; i <=m; i++) {
            for (int j = 1; j <= m-i; j++){
                System.out.print("  ");
            }
            for (int k = 1; k <= i; k++){
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}