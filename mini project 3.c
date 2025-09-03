#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>

    int age;
    char citizenship;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Are you a citizen? (Y/N): ");
    scanf(" %c", &citizenship);

    if (age >= 18) {
        if (citizenship == 'Y' || citizenship == 'y') {
            printf("You are eligible to vote.\n");
        } else {
            printf("You are not eligible to vote because you are not a citizen.\n");
        }
    } else {
        printf("You are not eligible to vote because you are below 18 years of age.\n");
    }
	return 0;
}
