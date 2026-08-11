package Patterns;

import java.util.Scanner;

public class RightTriangleIntFlipedUp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int m = sc.nextInt();

        for (int i = m; i >= 1; i--) {
            for(int j = 1; j <= i; j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
        sc.close();
    }
}
