#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Define the Student structure
typedef struct {
    char name[MAX_NAME_LENGTH];  
    int rollNumber;
    float marks;
} Student;

// Function to dynamically add a new student to the list
Student* addStudent(Student* list, int* size) {
    // Increase the size of the array for the new student
    list = (Student*)realloc(list, (*size + 1) * sizeof(Student));
    if (list == NULL) {
        printf("Memory allocation failed!\n");
        return NULL; // Return NULL if allocation fails
    }

    // Input student details
    printf("Enter student name: ");
    scanf(" %[^\n]", list[*size].name); // Read string with spaces
    printf("Enter roll number: ");
    scanf("%d", &list[*size].rollNumber);
    printf("Enter marks: ");
    scanf("%f", &list[*size].marks);
    
    (*size)++; // Increment the size after adding a student
    return list; // Return the updated list
}

// Function to display all student records
void displayStudents(Student* list, int size) {
    if (size == 0) {
        printf("No student records available.\n");
        return;
    }
    
    printf("\nStudent Records:\n");
    printf("------------------------------------------------\n");
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", 
                list[i].name, list[i].rollNumber, list[i].marks);
    }
    printf("------------------------------------------------\n");
}

// Function to save student records to a file
void saveToFile(Student* list, int size, const char* filename) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return;
    }
    
    for (int i = 0; i < size; i++) {
        fprintf(file, "%s\n%d\n%.2f\n", list[i].name, list[i].rollNumber, list[i].marks);
    }
    fclose(file);
    printf("Records saved to %s successfully.\n", filename);
}

// Function to load student records from a file
void loadFromFile(Student** list, int* size, const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return;
    }

    *size = 0;
    Student* tempList = NULL;
    
    while (!feof(file)) {
        tempList = (Student*)realloc(tempList, (*size + 1) * sizeof(Student));
        if (tempList == NULL) {
            printf("Memory allocation failed!\n");
            fclose(file);
            return;
        }

        // Read student details
        fscanf(file, " %[^\n]", tempList[*size].name); // Read string with spaces
        fscanf(file, "%d", &tempList[*size].rollNumber);
        fscanf(file, "%f", &tempList[*size].marks);
        (*size)++;
    }

    fclose(file);
    free(*list); // Free old list if exists
    *list = tempList; // Point list to loaded data
    printf("Records loaded from %s successfully.\n", filename);
}

int main() {
    Student* studentList = NULL; // Array of students
    int studentCount = 0; // Number of students
    int choice;
    const char* filename = "student_records.txt"; // File name for saving/loading records

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Save to File\n");
        printf("4. Load from File\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                // Add a student
                studentList = addStudent(studentList, &studentCount);
                break;
            case 2:
                // Display students
                displayStudents(studentList, studentCount);
                break;
            case 3:
                // Save to file
                saveToFile(studentList, studentCount, filename);
                break;
            case 4:
                // Load from file
                loadFromFile(&studentList, &studentCount, filename);
                break;
            case 5:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    // Free allocated memory
    free(studentList); 
    return 0;
}