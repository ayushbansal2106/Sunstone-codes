//write a java program to create a class car with 3 instance variables Brand name, colour, mileage and create a 2 object of this class and print the value.



public class Car {
    String brand_name;
    String colour;
    int mileage;
    void car(String b_n, String colr, int miles){
        brand_name=b_n;
        colour=colr;
        mileage=miles;
    }
    void DisplayInfo(){
        System.out.println("The car is manufactured by "+brand_name+" of colour "+colour+" with mileage of "+mileage);
    }
    public static void main(String[] args) {
        Car car1 = new Car();
        car1.car("Audi", "Black", 100);
        car1.DisplayInfo();
    }
}
