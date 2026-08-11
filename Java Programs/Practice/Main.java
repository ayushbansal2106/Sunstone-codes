import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        arraybacis a1 = new arraybacis();
        // a1.Twoadvance(sc);
        a1.multiarray();
    }
}

class arraybacis {
    void Twobasic() {
        int[][] matrix = {
                { 1, 2, 3 },
                { 4, 5, 6 },
                { 7, 8, 9 }
        };

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    void Onebasic() {
        int[] matrix = { 1, 2, 3, 4 };
        for (int i = 0; i < matrix.length; i++) {
            System.out.print(matrix[i] + " ");
        }
    }

    void Twomedium(Scanner sc) {
        int[][] matrix = new int[3][3];

        System.out.println("Enter elements for 3x3 matrix:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix[i].length; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    void Twoadvance(Scanner sc) {
        int[][] matrix = new int[3][3];
        int sum = 0;

        System.out.println("Enter elements for 3x3 matrix:");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                sum += matrix[i][j];
            }
        }

        System.out.println("Sum: " + sum);
    }

    void multiarray(){
        int [][][] arr = {
            {
                {1, 2, 3},
                {4, 5, 6}
            },
            {
                {7, 8, 9},
                {10, 11, 12}
            }
        };
        for (int i = 0; i < arr.length; i++) {
            System.out.println("Block " + (i + 1) + ":");
            for (int j = 0; j < arr[i].length; j++) {
                for (int k = 0; k < arr[i][j].length; k++) {
                    System.out.print(arr[i][j][k] + " ");
                }
                System.out.println();
            }
            System.out.println();
        }
    }
}
