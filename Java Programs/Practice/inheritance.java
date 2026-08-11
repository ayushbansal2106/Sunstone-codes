class Animal{   //Parent Class
    void sound(){   //Methods for printing sound
        System.out.println("Animal makes a sound");
    }
}
class Dog extends Animal{ //Sub Class 1
    void barks(){   //Method for printing bark
        System.out.println("dog barks");
    }
}
class Puppy extends Dog{ //Sub Class 2
    void play(){    //Method for printing play
        System.out.println("puppy is playing");
    }
}
public class inheritance{
    public static void main(String[] args){
        //Single inheritance
        Dog mydog = new Dog();
        mydog.sound();
        mydog.barks();

        //Multiple Inheritance
        Puppy mypuppy = new Puppy();
        mypuppy.sound();
        mypuppy.barks();
        mypuppy.play();
    }
}