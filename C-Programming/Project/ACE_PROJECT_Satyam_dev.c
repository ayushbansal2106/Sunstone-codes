#include <stdio.h>

// Function prototypes
int calculate_total(int marks[], int size);
float calculate_average(int total, int size);
char determine_grade(float average);
void clear_input_buffer();

int main() {
    int student_marks[5];
    int total_marks, i;
    float average_marks;
    char grade;
    int valid_input;

    printf("Enter marks for 5 subjects (0-100):\n");

    for (i = 0; i < 5; i++) {
        do {
            printf("Subject %d: ", i + 1);
            valid_input = scanf("%d", &student_marks[i]);
            clear_input_buffer();

            if (!valid_input || student_marks[i] < 0 || student_marks[i] > 100) {
                printf("Invalid input. Please enter a mark between 0 and 100.\n");
            }
        } while (!valid_input || student_marks[i] < 0 || student_marks[i] > 100);
    }

    total_marks = calculate_total(student_marks, 5);
    average_marks = calculate_average(total_marks, 5);
    grade = determine_grade(average_marks);

    printf("\nTotal Marks: %d\n", total_marks);
    printf("Average Marks: %.2f\n", average_marks);
    printf("Grade: %c\n", grade);

    return 0;
}

int calculate_total(int marks[], int size) {
    int sum = 0;
    for (int idx = 0; idx < size; idx++) {
        sum += marks[idx];
    }
    return sum;
}

float calculate_average(int total, int size) {
    return (float)total / size;
}

char determine_grade(float average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 75) {
        return 'B';
    } else if (average >= 60) {
        return 'C';
    } else if (average >= 40) {
        return 'D';
    } else {
        return 'F'; // Fail
    }
}

void clear_input_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}
