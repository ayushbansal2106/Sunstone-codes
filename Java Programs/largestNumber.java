public class largestNumber {
  public static String checkLargestNumber(int num1, int num2){
    return (num1>num2?"Num 1 is greater":"Num 2 is greater");
  }
  public static void main(String[] args) {
    System.out.println(checkLargestNumber(25, 30));
  }
}
