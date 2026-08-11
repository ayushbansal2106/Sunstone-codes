//write a java program to create a class student with two use case variable name and age, and create 3 object of this class and print the values.


import java.util.Scanner;

public class Student {
    String name;
    int age;
    void SetName(String name){
        this.name = name;
    }
    void SetAge(int ag){
        age = ag;
    }

    void DisplayInfo(){
        System.out.println("Age of "+name+" is "+age);
    }
    
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Student A1 = new Student();
        Student A2 = new Student();

        System.out.print("Enter the name of first student: ");
        String Name1 = scanner.next();
        A1.SetName(Name1);
        System.out.print("Enter the age of first student: ");
        int Age1 = scanner.nextInt();
        A1.SetAge(Age1);

        System.out.print("Enter the name of second student: ");
        String Name2 = scanner.next();
        A2.SetName(Name2);
        System.out.print("Enter the age of second student: ");
        int Age2 = scanner.nextInt();
        A2.SetAge(Age2);

        A1.DisplayInfo();
        A2.DisplayInfo();
        scanner.close();
    }
}
