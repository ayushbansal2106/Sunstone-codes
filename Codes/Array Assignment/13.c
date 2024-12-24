#include <stdio.h> // Include the standard input-output library

int main()
{
    // Declare variables
    int n, val, pos;

    // Prompt user to input the number of elements
    printf("Input number of elements you want to insert: ");
    scanf("%d", &n); // Read the number of elements into 'n'
    int arr[n];

    // Input the elements into the array
    for (int i = 0; i < n; i++)
    {
        printf("element - %d : ", i); // Prompt for each element
        scanf("%d", &arr[i]);         // Read the element into the array
    }

    // Prompt the user for the value to be inserted
    printf("Input the value to be inserted: ");
    scanf("%d", &val); // Read the value to be inserted

    // Declare an index variable to find the position for insertion
    int i = 0;

    // Find the appropriate position to insert the new value
    while (i < n && arr[i] < val)
    {
        i++; // Increment 'i' until we find the right position
    }

    // Shift elements to the right to make space for the new value
    // Start from the end of the array and move each element one position right
    for (int j = n; j > i; j--)
    {
        arr[j] = arr[j - 1]; // Shift each element to the right
    }

    // Insert the new value at the correct position
    arr[i] = val; // Place the new value into the array at index 'i'

    // Increment the number of elements in the array
    n++;

    // Print the updated array to show the result
    printf("After Insert the list is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]); // Print each element in the updated array
    }

    return 0; // Indicate that the program ended successfully
}
