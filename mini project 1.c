#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int marks;
printf("Enter student's marks: ");

    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("Invalid marks entered. Marks must be between 0 and 100.\n");
    } else if (marks >= 90) {
        printf("The assigned grade is: A\n");
    } else if (marks >= 80) {
        printf("The assigned grade is: B\n");
    } else if (marks >= 70) {
        printf("The assigned grade is: C\n");
    } else if (marks >= 50) {
        printf("The assigned grade is: D\n");
    } else {
        printf("The assigned grade is: F\n");
    }	
	
	
	
	
	
	 
	
	
	

	
	
	
	
	
	
	
	




	
return 0;
}
