import java.util.Scanner;

public class VotingEligibility {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter your age: ");
        int age = scanner.nextInt();
        if(age<18){
            System.out.println("You are not eligible to vote.");
        }
        else{
            System.out.println("You are eligible to vote.");
        }
        scanner.close();
    }
}
