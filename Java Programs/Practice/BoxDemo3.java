// Class to represent a Box
class Box {
    // Attributes (instance variables) to store the dimensions of the box
    double width;
    double height;
    double depth;

    // Method to calculate and display the volume of the box
    void volume() {
        // Calculate volume and print it
        double vol = width * height * depth;
        System.out.println("Volume of the box is: " + vol);
    }
}

// Main class with the main method
public class BoxDemo3 {
    public static void main(String[] args) {
        // Create two objects (instances) of the Box class
        Box mybox1 = new Box(); // First box
        Box mybox2 = new Box(); // Second box

        // Assign values to the instance variables of the first box (mybox1)
        mybox1.width = 10; // Set width to 10
        mybox1.height = 20; // Set height to 20
        mybox1.depth = 15; // Set depth to 15

        // Assign different values to the instance variables of the second box (mybox2)
        mybox2.width = 3; // Set width to 3
        mybox2.height = 6; // Set height to 6
        mybox2.depth = 9; // Set depth to 9

        // Display the volume of the first box (mybox1)
        mybox1.volume();

        // Display the volume of the second box (mybox2)
        mybox2.volume();
    }
}
