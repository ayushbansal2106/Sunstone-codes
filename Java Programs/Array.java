public class Array {
  static int insertAt(int[] arr, int n, int i, int value) {
    if (n == arr.length) {
      System.out.println("Array is full");
      return n;
    }

    if (i < 0 || i > n) {
      System.out.println("Invalid index");
      return n;
    }

    for (int j = n; j >= i; j--) {
      arr[j+1] = arr[j];
    }
    arr[i] = value;
    return n + 1;
  }

  static int deleteAt(int[] arr, int n, int i) {
    if (n == 0) {
      System.out.println("Expty array");
      return n;
    }

    if (i < 0 || i > n) {
      System.out.println("Invalid index");
      return n;
    }

    for (int j = i; j < n - 1; j++) {
      arr[j] = arr[j + 1];
    }
    arr[n - 1] = 0;
    return n - 1;
  }

  static void traverse(int[] arr, int n) {
    if (n == 0) {
      System.out.println("Array is empty");
      return;
    }

    for (int j = 0; j < n; j++) {
      System.out.print(arr[j] + " ");
      System.out.println();
    }
  }

  public static void main(String[] args) {
    int[] a = new int[5]; // 'a' is the array with capacity 5
    int n = 0; // 'n' tracks how many valid elements we currently have

    n = insertAt(a, n, 0, 10); // put 10 at index 0 -> [10]
    n = insertAt(a, n, 1, 30); // put 30 at index 1 -> [10, 30]
    n = insertAt(a, n, 1, 20); // put 20 at index 1 -> [10, 20, 30]
    traverse(a, n);

    n = deleteAt(a, n, 1); // remove index 1 (20) -> [10, 30]
    traverse(a, n);
  }
}
