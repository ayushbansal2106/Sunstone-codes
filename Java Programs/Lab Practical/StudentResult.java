import java.util.Scanner;

public class StudentResult {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input roll number
        System.out.println("Enter Roll Number: ");
        int rollNumber = scanner.nextInt();
        scanner.nextLine(); // Consume newline

        // Input name
        System.out.println("Enter Name: ");
        String name = scanner.nextLine();

        // Input marks for three subjects
        System.out.println("Enter marks for three subjects (each out of 100):");
        int subject1 = scanner.nextInt();
        int subject2 = scanner.nextInt();
        int subject3 = scanner.nextInt();
        int Total = subject1+subject2+subject3;
        double percentage = (double)Total/3;
      
      // Enter your code here
      System.out.println("\n\nResults:");
      System.out.println("Roll Number: "+rollNumber);
      System.out.println("Name: "+name);
      System.out.println("Total Marks: "+Total);
      System.out.printf("Percentage: %.2f%%\n",percentage);
      if(percentage>=60){
          System.out.println("Division: First");
      }
      else if(percentage>=50&&percentage<60){
          System.out.println("Division: Second");
      }
      else if(percentage>=40&&percentage<50){
          System.out.println("Division: Third");
      }
      else{
          System.out.println("Division: Fail");
      }
        scanner.close();
    }
}
