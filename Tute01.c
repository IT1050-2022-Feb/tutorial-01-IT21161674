/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main(void)
{
	int mark1, mark2;
	float average;
	
	printf("Enter mark of subject1: ");
	scanf("%d", &mark1);
	printf("Enter mark of subject2: ");
	scanf("%d", &mark2);
	
	average = (mark1 + mark2) / 2.0;
	
	printf("Average of two marks is: %.2f", average);
	
	return 0;
}

