/* Write a menudriven program
    i) parlindrome checker
    ii) a program to calculate volume of different shapes
*/

#include <stdio.h>
#include <math.h>

void printmenu();
void checkparlindrome();
void calculatevolume();
void volmenu();
float cubevol();
int cuboidvol();
void cylindervol();
void conevol();

int main()
{
    int choice;
    do
    {
        printmenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            checkparlindrome();
            break;

        case 2:
            calculatevolume();
            break;

        case 3:
            printf("Exitting the program\n");
            break;

        default:
            printf("Invalid input entered, please TRy AGAIN\n");
            break;
        }
    } while (choice != 3);

    return 0;
}

void calculatevolume()
{
    int choice;
    do
    {
        volmenu();
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Volume of cube: %d\n\n\n", cubevol());
            break;

        case 2:
            printf("Volume of cuboid: %d\n\n\n", cuboidvol());
            break;

        case 3:
            cylindervol();
            break;

        case 4:
            conevol();
            break;

        case 5:
            printf("Exitting the program\n");
            break;

        default:
            printf("Invalid input, Please TRY AGAIN\n");
            break;
        }
    } while (choice != 5);
}

float cubevol()
{
    float side;
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    float volume = pow(side, 3);
    return volume;
}

int cuboidvol()
{
    int length, breadth, height;
    printf("Enter the lenght of the cuboid: ");
    scanf("%d", &length);
    printf("Enter the breadth of the cuboid: ");
    scanf("%d", &breadth);
    printf("Enter the height of the cuboid: ");
    scanf("%d", &height);

    int volume = length * breadth * height;
    return volume;
}

void cylindervol()
{
    int rad, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%d", &rad);
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    double volume = (3.14) * pow(rad, 2) * height;
    printf("Volume of cylinder: %.2lf\n\n\n", volume);
}

void conevol()
{
    int rad, height;
    printf("Enter the radius of the cone: ");
    scanf("%d", &rad);
    printf("Enter the height of the cone: ");
    scanf("%d", &height);

    double volume = ((1.0 / 3.0) * (3.14) * pow(rad, 2) * height);
    printf("Volume of cone: %.2lf\n\n\n", volume);
}

void volmenu()
{
    printf("Select the shape you want to calculate the area for\n");
    printf("1. Cube\n");     // a*a*a
    printf("2. Cuboid\n");   // l*b*h
    printf("3. Cylinder\n"); // 3.14*r*r*h
    printf("4. Cone\n");     //(1/3)*3.14*r*r*h
    printf("5. Exit\n");
}

void checkparlindrome()
{
    int n, reversed = 0, original, digit;

    printf("Enter an integer: ");
    scanf("%d", &n);

    original = n;
    while (n != 0)
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if (original == reversed)
    {
        printf("%d is a palindrome number.\n\n\n", original);
    }
    else
    {
        printf("%d is not a palindrome number.\n\n\n", original);
    }
}

void printmenu()
{
    printf("Select the task you want to perform\n");
    printf("1. Parlindrome number checker\n");
    printf("2. Calculate the volume of different shapes\n");
    printf("3. Exit the program\n");
}