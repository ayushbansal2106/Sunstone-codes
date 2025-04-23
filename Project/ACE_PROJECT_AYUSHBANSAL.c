#include <stdio.h>
#include <math.h>
float area_circle(float radius);
float perimeter_circle(float radius);
float area_rectangle(float length, float width);
float perimeter_rectangle(float length, float width);
float area_triangle(float a, float b, float c);
float perimeter_triangle(float a, float b, float c);
int validate_positive_float(float value);
#ifndef M_PI
#define M_PI 3.14
#endif
int main() {
    int choice;
    float radius, length, width, a, b, c;
    int valid_input;

    do {
        printf("\nShape Calculator\n");
        printf("1. Circle\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        valid_input = scanf("%d", &choice);

        if (!valid_input || choice < 1 || choice > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue;
        }

        switch (choice) {
            case 1:
                do {
                    printf("Enter the radius of the circle: ");
                    valid_input = scanf("%f", &radius);
                    if (!valid_input || !validate_positive_float(radius)) {
                        printf("Invalid input. Radius must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(radius));

                printf("Area of circle: %.2f\n", area_circle(radius));
                printf("Circumference of circle: %.2f\n", perimeter_circle(radius));
                break;

            case 2:
                do {
                    printf("Enter the length of the rectangle: ");
                    valid_input = scanf("%f", &length);
                    if (!valid_input || !validate_positive_float(length)) {
                        printf("Invalid input. Length must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(length));

                do {
                    printf("Enter the width of the rectangle: ");
                    valid_input = scanf("%f", &width);
                    if (!valid_input || !validate_positive_float(width)) {
                        printf("Invalid input. Width must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(width));

                printf("Area of rectangle: %.2f\n", area_rectangle(length, width));
                printf("Perimeter of rectangle: %.2f\n", perimeter_rectangle(length, width));
                break;

            case 3:
                do {
                    printf("Enter the length of side a: ");
                    valid_input = scanf("%f", &a);
                    if (!valid_input || !validate_positive_float(a)) {
                        printf("Invalid input. Side length must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(a));

                do {
                    printf("Enter the length of side b: ");
                    valid_input = scanf("%f", &b);
                    if (!valid_input || !validate_positive_float(b)) {
                        printf("Invalid input. Side length must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(b));

                do {
                    printf("Enter the length of side c: ");
                    valid_input = scanf("%f", &c);
                    if (!valid_input || !validate_positive_float(c)) {
                        printf("Invalid input. Side length must be a positive number.\n");
                    }
                } while (!valid_input || !validate_positive_float(c));
                if (a + b <= c || a + c <= b || b + c <= a) {
                    printf("The entered sides do not form a valid triangle.\n");
                    break;
                }

                printf("Area of triangle: %.2f\n", area_triangle(a, b, c));
                printf("Perimeter of triangle: %.2f\n", perimeter_triangle(a, b, c));
                break;

            case 4:
                printf("Exiting program.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}

float area_circle(float radius) {
    return M_PI * radius * radius;
}

float perimeter_circle(float radius) {
    return 2 * M_PI * radius;
}

float area_rectangle(float length, float width) {
    return length * width;
}

float perimeter_rectangle(float length, float width) {
    return 2 * (length + width);
}

float area_triangle(float a, float b, float c) {
    float s = (a + b + c) / 2.0f;
    return sqrtf(s * (s - a) * (s - b) * (s - c));
}

float perimeter_triangle(float a, float b, float c) {
    return a + b + c;
}

int validate_positive_float(float value) {
    return value > 0;
}