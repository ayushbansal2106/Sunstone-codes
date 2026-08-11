#include <stdio.h>

// Displays the current account balance
void check_balance(float balance);
// Handles money withdrawal and returns updated balance
float withdraw_money(float balance); 
// Handles money deposit and returns updated balance
float deposit_money(float balance);

int main() {
    // Initialize starting balance to $1000
    float balance = 1000.0f;
    // Variable to store user's menu choice
    int choice;
    // Flag to check if input is valid
    int valid_input;

    // Main program loop - continues until user chooses to exit
    do {
        // Display ATM menu options
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Deposit Money\n"); 
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        
        // Get user input and validate it
        valid_input = scanf("%d", &choice);

        // Check if input is invalid (not 1-4)
        if (!valid_input || choice < 1 || choice > 4) {
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            continue; // Skip rest of loop and prompt again
        }

        // Process user's choice
        switch (choice) {
            case 1:
                check_balance(balance); // Show current balance
                break;
            case 2:
                balance = withdraw_money(balance); // Withdraw money
                break;
            case 3:
                balance = deposit_money(balance); // Deposit money
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
        }
    } while (choice != 4); // Continue until user chooses to exit

    return 0;
}

// Function to display current balance
void check_balance(float balance) {
    printf("Your current balance is: $%.2f\n", balance);
}

// Function to handle withdrawal process
float withdraw_money(float balance) {
    float amount;
    int valid_input;

    // Loop until valid withdrawal amount is entered
    do {
        printf("Enter amount to withdraw: ");
        valid_input = scanf("%f", &amount);

        // Validate withdrawal amount
        if (!valid_input || amount <= 0) {
            // Check if amount is positive number
            printf("Invalid amount. Please enter a positive number.\n");
        } else if (amount > balance) {
            // Check if sufficient funds available
            printf("Insufficient balance. You cannot withdraw more than your current balance.\n");
        } else {
            // Process valid withdrawal
            balance -= amount;
            printf("Withdrawal successful. New balance: $%.2f\n", balance);
            break;
        }
    } while (1);

    return balance; // Return updated balance
}

// Function to handle deposit process
float deposit_money(float balance) {
    float amount;
    int valid_input;

    // Loop until valid deposit amount is entered
    do {
        printf("Enter amount to deposit: ");
        valid_input = scanf("%f", &amount);

        // Validate deposit amount
        if (!valid_input || amount <= 0) {
            // Check if amount is positive number
            printf("Invalid amount. Please enter a positive number.\n");
        } else {
            // Process valid deposit
            balance += amount;
            printf("Deposit successful. New balance: $%.2f\n", balance);
            break;
        }
    } while (1);

    return balance; // Return updated balance
}
