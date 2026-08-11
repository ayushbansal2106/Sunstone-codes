
    import java.util.Scanner;

    public class SumOfNaturalNumbers {
        public static void main(String[] args) {
            
            Scanner scanner = new Scanner(System.in);
    
            int n = 10;
            int sum = 0;
    
            for (int i = 1; i <= n; i++) {
                sum = sum + i;
            }
    
            System.out.println("The sum of the first " + n + " natural numbers is: " + sum);
    
            scanner.close();
        }
    }
     

