#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice;
    float balance = 5.00;

    printf("Welcome to the Vending Machine!\n");
    printf("1. Water - $1\n");
    printf("2. Juice - $2\n");
    printf("3. Soda - $3\n");
    printf("4. Exit\n");
    printf("Current Balance: $%.2f\n", balance);
    printf("Please select a drink (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (balance >= 1.00) {
                balance -= 1.00;
                printf("You have purchased Water. Your new balance is $%.2f.\n", balance);
            } else {
                printf("Insufficient funds. You need $1.00 but only have $%.2f.\n", balance);
            }
            break;
        case 2:
            if (balance >= 2.00) {
                balance -= 2.00;
                printf("You have purchased Juice. Your new balance is $%.2f.\n", balance);
            } else {
                printf("Insufficient funds. You need $2.00 but only have $%.2f.\n", balance);
            }
            break;
        case 3:
            if (balance >= 3.00) {
                balance -= 3.00;
                printf("You have purchased Soda. Your new balance is $%.2f.\n", balance);
            } else {
                printf("Insufficient funds. You need $3.00 but only have $%.2f.\n", balance);
            }
            break;
        case 4:
            printf("Exiting. Thank you!\n");
            break;
        default:
            printf("Invalid selection.\n");
            break;
    }

	return 0;
}
