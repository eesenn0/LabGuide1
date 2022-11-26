/*Write a program that displays a menu on the screen with the following options, and performs the required operation :
1. Triangular?
2. Prime?
3. EXIT
Program terminates when user enters 3.*/

#include <stdio.h>

int main()
{	
	int choice;

	printf("MENU\n");
	printf("-------\n");
	printf("1. Triangular\n2. Prime\n3. Exit\n");

	printf("Enter your choice:");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
	{
		int number, i, sum = 0;
		
		printf("Enter a number: ");
		scanf_s("%d", &number);

		for (i = 0; i < number; i++)
		{
			sum = sum + i;

			if (sum == number)
			{
				printf("%d is a triangular number.", number);
				break;
			}
		}

		if (number == i)
		{
			printf("%d is not a triangular number.", number);
		}
		break;
	}
	case 2:
	{
		int prime_num;
		printf("Enter a number:\n");
		scanf_s("%d", &prime_num);

		if (prime_num % 2 == 0)
		{
			printf("%d is NOT a prime number.", prime_num);
		}
		else if (prime_num % 3 == 0)
		{
			printf("%d is NOT a prime number.", prime_num);
		}
		else if (prime_num % 5 == 0)
		{
			printf("%d is NOT a prime number.", prime_num);
		}
		else if (prime_num % 7 == 0)
		{
			printf("%d is NOT a prime number.", prime_num);
		}
		else
			printf("%d is a prime number", prime_num);
		break;
	}
	case 3:
		break;
	}

	return 0;
}