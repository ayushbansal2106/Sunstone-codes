public class FibonacciNumbers {
    public static void main(String[] args) {

        int num1 = 0, num2 = 1;

        int count = 1;

        System.out.print(num1 + " ");

        do {
           
            System.out.print(num2 + " ");
            
            int nextNum = num1 + num2;
            
            num1 = num2;
            num2 = nextNum;
            
            count++;
        } while (count < 10);  

        System.out.println();  
    }
}

