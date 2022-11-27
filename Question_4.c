/*Write a C program that will take a positive number as input, and output the digits of each given number in words and in 
reverse order. Your program must check for validity of the given input and then it must give an error message if the number 
is not a positive number.*/

#include <stdio.h>

int main()
{
	int pos_num;

	printf("Enter a positive number: ");
	scanf_s("%d", &pos_num);


	if (pos_num > 0)
	{
		while(pos_num % 10 != 0)
		{
			int remainder = pos_num % 10;
			pos_num = pos_num / 10;

			switch (remainder)
			{
			case 1:
			{
				printf("ONE\t");
				break;
			}
			case 2:
			{
				printf("TWO\t");
				break;
			}
			case 3:
			{
				printf("THREE\t");
				break;
			}
			case 4:
			{
				printf("FOUR\t");
				break;
			}
			case 5:
			{
				printf("FIVE\t");
				break;
			}
			case 6:
			{
				printf("SIX\t");
				break;
			}
			case 7:
			{
				printf("SEVEN\t");
				break;
			}
			case 8:
			{
				printf("EIGHT\t");
				break;
			}
			case 9:
			{
				printf("NINE\t");
				break;
			}
			}
		}
	}
	else
		printf("Sorry! You didn't give a positive number!!!");
	
	return 0;
}