#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 char signal;

    while (1) {
        printf("Enter a traffic signal (R, Y, G) or 'Q' to quit: ");
        scanf(" %c", &signal);

        if (signal == 'q' || signal == 'Q') {
            printf("Exiting simulator.\n");
            break;
        }

        switch (signal) {
            case 'R':
            case 'r':
                printf("Red -> Stop\n");
                break;
            case 'Y':
            case 'y':
                printf("Yellow -> Get Ready\n");
                break;
            case 'G':
            case 'g':
                printf("Green -> Go\n");
                break;
            default:
                printf("Invalid input. Please enter R, Y, G, or 'Q'.\n");
                break;
        }
    }

	return 0;
}
