import java.util.*;

public class Pattern {

  public static void upperTriangular(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j >= i) {
          System.out.print("* ");
        } else {
          System.out.print("_ ");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void mainDiagonal(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void antiDiagonal(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i + j == n - 1) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void lowerTriangular(int n) { // Right Angled Triangle
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i >= j) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void squaredNumberRightAngled(int n) {
    // int num =0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i >= j) {
          System.out.print(" " + (j + 1) * (j + 1) + " ");
        } else {
          System.out.print(".");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void mirrorLowerTriangular(int n) { // Mirrored Right Angled Triangle
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i + j >= n - 1) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
    System.out.println();
  }

  public static void hollowBox(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
          System.out.print(" * ");
        } else {
          System.out.print("   ");
        }
      }
      System.out.println();
    }
  }

  public static void solidBox(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        System.out.print("* ");
      }
      System.out.println();
    }
  }

  public static void cross(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i == j || i + j == n - 1) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }

  public static void  pyramid(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= (2 * n - 2); j++) {
        if ((i + j >= n - 1) && (i >= j - n + 1)) {
          System.out.print("* ");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void numberedPyramid(int n) {
    int num = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= (2 * n - 2); j++) {
        if ((i + j >= n - 1) && (i >= j - n + 1)) {
          System.out.printf("%4d", (++num));
        } else {
          System.out.print("    ");
        }
      }
      System.out.println();
    }
  }

  public static void inversePyramid(int n) {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= (2 * n - 2); j++) {
        if (i <= j && i + j <= (2 * n - 2)) {
          System.out.print("* ");
        } else {
          System.out.print("  ");
        }

      }
      System.out.println();
    }
  }

  public static void diamond(int n) {
    for (int i = 0; i <= (2 * n - 2); i++) {
      for (int j = 0; j <= (2 * n - 2); j++) {
        if ((i + j >= n - 1) && (i >= j - n + 1) && (i <= j + n - 1) && (i + j <= 3 * n - 3)) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }

  public static void pentagon(int n) {
    for (int i = 0; i <= n; i++) {
      for (int j = 0; j <= 2 * n - 2; j++) {
        if ((i + j >= n - 1) && (i >= j - (2 * n + 2))) {
          System.out.print("* ");
        } else {
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void tiltedPyramid(int n) {
    for (int i = 0; i <= 2 * n - 2; i++) {
      for (int j = 0; j < n; j++) {
        if (((i <= j + n - 1) && (i >= n - 1)) || ((i + j >= n - 1) && (i <= n - 1))) {
          System.out.print("*");
        } else {
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }

  public static void hexagon(int n) {
    int k = (n + 1) / 2;
    for (int i = 0; i < 2 * n + k; i++) {
      for (int j = 0; j < 2 * n - 1; j++) {
        if ((i + j >= n - 1) && (i >= j - n + 1) && (i <= j + n - 1 + k) && (i + j <= 3 * n - 3 + k)) {
          System.out.print(" * ");
        } else {
          System.out.print("   ");
        }
      }
      System.out.println();
    }
  }

  public static void swastik(int n) {
    if ((n % 2 != 0) && (n > 3)) {
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (i == n / 2 || j == n / 2 || ((j == 0) && (i <= n / 2)) || ((i == 0) && (j >= n / 2))
              || ((i == n - 1) && (j <= n / 2)) || ((j == n - 1) && (i >= n / 2))) {
            System.out.print(". ");
          } else {
            System.out.print("  ");
          }
        }
        System.out.println();
      }
    }else{
      System.out.println("Invalid value entered");
    }
  }

  public static void numBox(int n){
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (j<i) {
          System.out.print(i+1 + " ");
        }else{
          System.out.print(j+1 + " ");
        }
      }
      System.out.println();
    }
  }

  public static void hollowDiamond(int n){
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i==0 || i==n-1 || j==0 || j==n-10
          || i-j <= -(n/2)
          || i+j <= n/2
          || i+j >= 3 * (n/2)
          || i-j >= n/2
        ) {
          System.out.print("* ");
        } else{
          System.out.print("  ");
        }
      }
      System.out.println();
    }
  }

  public static void numberPalindromePyramid(int n){
    int d=0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j <= 2 * n - 2; j++) {
        if (i-j>=1-n && i+j>=n-1) {
          if (j<=n-1) {
            System.out.print(++d);            
          }else{
            System.out.print(--d);
          }
        }else{
          System.out.print(" ");
        }
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    // System.out.print("Enter the value of n: ");
    // int n = sc.nextInt();
    int n = 5;
    sc.close();
  //   upperTriangular(n);
  //   mainDiagonal(n);
  //   antiDiagonal(n);
  //   lowerTriangular(n);
  //   mirrorLowerTriangular(n);
  //   hollowBox(n);
  //   solidBox(n);
  //   cross(n);
    // pyramid(n);
    // inversePyramid(n);
  //   diamond(n);
  //   pentagon(n);
  //   tiltedPyramid(n);
  //   hexagon(n);
    // squaredNumberRightAngled(n);
    // numberedPyramid(n);
    // swastik(n);
  //   numBox(n);
  //   hollowDiamond(n);
    numberPalindromePyramid(n);
  }
}