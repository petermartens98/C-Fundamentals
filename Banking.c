/*
Banking App in C

This code is a simple banking app that allows users to deposit, withdraw, and check their account balance. 
It uses a struct to store the user's account number and balance. The program prompts the user to enter 
an account number and initial balance, and then displays a menu with options for depositing money, withdrawing money,
 checking the account balance, and quitting the program.

The program uses three helper functions to format and parse monetary values and to handle the deposit and withdrawal functionality.
 The format_money function takes a float amount and returns a string formatted as a money value. The parse_money function takes a 
 string input and a pointer to a float amount and sets the amount to the parsed value of the input. The deposit and withdraw functions
  prompt the user for an amount to deposit or withdraw, parse it using the parse_money function, and add or subtract the amount from the user's balance.

The program uses a do-while loop to repeatedly display the menu and execute the corresponding function based on the user's input.
 The loop continues indefinitely until the user chooses the option to quit the program. 
 The program uses standard input and output functions, including scanf, printf, and fgets.
*/

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct account {
    int account_number;
    float balance;
};

// Define Functions

// This function takes a float amount and returns a string formatted as a money value
char *format_money(float amount) {
    char *formatted = malloc(20);
    setlocale(LC_ALL, ""); // set locale to current user's locale for formatting
    snprintf(formatted, 20, "$%'.2f", amount); // format the amount as a money value
    return formatted; // return the formatted string
}

// This function takes a string input and a pointer to a float amount, and sets the amount to the parsed value of the input
void parse_money(char *input, float *amount) {
    int i = 0;
    char c;
    char buffer[20] = "";
    while ((c = input[i++]) != '\0') { // iterate over the input string
        if (isdigit(c) || c == '.') { // if the character is a digit or a decimal point
            strncat(buffer, &c, 1); // append it to the buffer
        }
    }
    *amount = atof(buffer); // convert the buffer to a float and set the amount pointer to its value
}

// This function prompts the user for an amount to deposit, parses it, and adds it to the user's balance
void deposit(struct account *user) {
    float amount;
    char input[20];
    printf("\nEnter amount to deposit: ");
    scanf("%s", input); // read the input string
    parse_money(input, &amount); // parse the input string to get the deposit amount
    user->balance += amount; // add the deposit amount to the user's balance
    printf("Deposit successful. New balance: %s\n", format_money(user->balance)); // print the updated balance
}

// This function prompts the user for an amount to withdraw, parses it, and subtracts it from the user's balance (if possible)
void withdraw(struct account *user) {
    float amount;
    char input[20];
    printf("\nEnter amount to withdraw: ");
    scanf("%s", input); // read the input string
    parse_money(input, &amount); // parse the input string to get the withdrawal amount
    if (amount > user->balance) { // if the withdrawal amount is greater than the user's balance
        printf("Error: Insufficient funds\n"); // print an error message
    } else {
        user->balance -= amount; // subtract the withdrawal amount from the user's balance
        printf("Withdrawal successful. New balance: %s\n", format_money(user->balance)); // print the updated balance
    }
}

// This function prints the user's current balance
void check_balance(struct account *user) {
    printf("\nAccount balance: %s\n", format_money(user->balance)); // print the user's balance
}

// Main Function
int main() {
    struct account user;
    int choice;

    printf("Welcome to the banking app!\n");

    // create account
    printf("Enter an account number: ");
    scanf("%d", &user.account_number); // read the account number from the user
    getchar(); // consume newline left by scanf
    printf("Enter initial balance: ");
    char input[20];
    fgets(input, 20, stdin); // read the initial balance from the user
    parse_money(input, &user.balance); // parse the input string to get the initial balance

    // main menu loop
    do {
        // Print options
        printf("\nChoose an option:\n");
        printf("1. Deposit money\n");
        printf("2. Withdraw money\n");
        printf("3. Check balance\n");
        printf("4. Quit\n");
        printf("Option: ");

        // Read user input
        scanf("%d", &choice);

        // Execute corresponding function based on user input
        switch(choice) {
            case 1:
                deposit(&user);
                break;
            case 2:
                withdraw(&user);
                break;
            case 3:
                check_balance(&user);
                break;
            case 4:
                // Exit program
                printf("\nThank you for using the banking app!\n");
                exit(0);
            default:
                // Invalid input
                printf("\nInvalid option. Please try again.\n");
        }} while (1); // Continue Loop Indefinitely
        return 0;
}