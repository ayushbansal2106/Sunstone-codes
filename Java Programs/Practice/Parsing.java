public class Parsing {
    public static void main(String[] args) {
        int array[] = {1,2,3,4,5};

        for(int i = 0; i < 5; i++)
        {
            System.out.println("Array :" + array[i]);
        }
        manipulateArray(array);
        display(array);

    }
    static void manipulateArray(int a[])
    {
        for(int i = 0; i < a.length; i++)
        {
            a[i] = a[i] * 10;
        }

    }
    static void display(int a[])
    {
        System.out.println("Displaying the array elements after Parsing :");
        for (int i = 0; i < a.length; i++) {
            System.out.println("Elements :" +a[i]);
        }
    }
}