#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   int pin = 0, correct_pin = 2020, choice;
    float balance = 1000.00, amount;
    
    printf("Please enter your 4-digit PIN: ");
    scanf("%d", &pin);

    if (pin != correct_pin) {
        printf("Incorrect PIN. Exiting.\n");
        return 1;
    }

    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: $%.2f\n", balance);
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful. New balance: $%.2f\n", balance);
                } else {
                    printf("Invalid deposit amount.\n");
                }
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    if (amount <= balance) {
                        balance -= amount;
                        printf("Withdrawal successful. New balance: $%.2f\n", balance);
                    } else {
                        printf("Insufficient balance.\n");
                    }
                } else {
                    printf("Invalid withdrawal amount.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please enter a number between 1 and 4.\n");
                break;
        }
    }
	
	return 0;
}
