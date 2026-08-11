//constructor basics

public class Cat {

  int age;
  String name;
  String breed;

  // Cat(int age, String name){
  //   this.age = age;
  //   this.name = name;
  // }

  Cat(int age, String name, String breed){
    this.age = age;
    this.name = name;
    this.breed = breed;
  }

  // Cat)
  // Cat(){
  //   System.out.println("cat mewos");
  // }

  void display(){
    System.out.println(age);
    System.out.println(name);
    System.out.println(breed);
    System.out.println(name + " is " + age + " years old" + " and is of breed " + breed);
  }

  public static void main(String[] args) {
    Cat c1 = new Cat(10, "pussy", null);
    Cat c2 = new Cat(19, "Suhani", "bitch");
    c1.display();
    c2.display();
  }
}