#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	  char operator;
    double num1, num2, result;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("The result is: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result is: %.2f\n", result);g
            break;
        case '*':
            result = num1 * num2;
            printf("The result is: %.2f\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = num1 / num2;
                printf("The result is: %.2f\n", result);
            }
            break;
        default:
            printf("Invalid operator entered.\n");
            break;
    }
	return 0;
}
