/*---Write a C program which uses 4 memory cells to find and display the average and sum of 4 values.
 Declare 2 constant values and get input for the other 2 values from the user.---*/


#include <stdio.h>

int main()
{
	int num_1 = 3, num_2 = 5, num_3, num_4;

	printf("Please enter the third number:");
	scanf_s("%d", &num_3);

	printf("\nPlease enter the fourth number:");
	scanf_s("%d", &num_4);

	int sum = num_1 + num_2 + num_3 + num_4; // sum
	int avg = (num_1 + num_2 + num_3 + num_4) / 4; //average

	printf("Sum of your numbers are:%d\n", sum);
	printf("Average of your numbers are:%d", avg);

	return 0;
}