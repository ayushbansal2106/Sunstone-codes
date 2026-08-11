public class sorting {

  public static void swap(int arr[], int j) {
    int temp = arr[j];
    arr[j] = arr[j + 1];
    arr[j + 1] = temp;
  }

  public static void swap(int arr[], int j, int i) {
    int temp = arr[j];
    arr[j] = arr[i];
    arr[i] = temp;
  }

  public static void display(int arr[]) {
    for (int x : arr) {
      System.out.print(x + " ");
    }
  }

  public static void bubbleSort(int arr[]) {
    for (int i = 0; i < arr.length; i++) {
      for (int j = 0; j < arr.length - 1 - i; j++) {
        if (arr[j] > arr[j + 1]) {
          swap(arr, j);
        }
      }
    }
    display(arr);
  }

  public static void insertionSort(int arr[]) {
    for (int i = 0; i < arr.length - 1; i++) {
      int less = i;
      for (int j = i + 1; j < arr.length; j++) {
        if (arr[j] < arr[less]) {
          less = j;
        }
        swap(arr, less, i);
      }
    }
    display(arr);
  }

  

  public static void main(String[] args) {
    int arr[] = { 5, 7, 9, 12, 32, 8, 1, 2, 0, 3, 19, -1, -33 };
    // bubbleSort(arr);
    insertionSort(arr);
  }
}
