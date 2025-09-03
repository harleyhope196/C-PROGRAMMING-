#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	   char category;

    printf("Enter the first letter of a book category (F, N, S, H): ");
    scanf(" %c", &category);

    switch (category) {
        case 'F':
        case 'f':
            printf("The category is: Fiction\n");
            break;
        case 'N':
        case 'n':
            printf("The category is: Non-Fiction\n");
            break;
        case 'S':
        case 's':
            printf("The category is: Science\n");
            break;
        case 'H':
        case 'h':
            printf("The category is: History\n");
            break;
        default:
            printf("The category is: Invalid category\n");
            break;
    }
	return 0;
}
