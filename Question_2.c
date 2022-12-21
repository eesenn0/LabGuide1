/* In a country, there are three counties (eyalet) with different tax rates to be applied on any purchase, as shown
in the table below. Write a program that displays the amount owed on a purchase, including sales tax, given the 
amount of the purchase and the type of the county. Make data validation for County Type! Use Switch 
Statement */
// County A : 7%
// County B : 6%
// County C : 4%

#include <stdio.h>

int main()
{
	int amount;
	char county;

	printf("Enter the amount of purchase:");
	scanf_s("%d", &amount);

	int new_amount0 = amount + (amount * 7) / 100;
	int new_amount1 = amount + (amount * 6) / 100;
	int new_amount2 = amount + (amount * 4) / 100;

	printf("\nEnter the county:");
	scanf_s(" %c", &county);

	switch (county)
	{
	case 'a':
	case 'A':
		printf("The amount owed is: %d\n", new_amount0);
		break;
	case 'b':
	case 'B':
		printf("The amount owed is: %d\n", new_amount1);
		break;
	case 'c':
	case 'C':
		printf("The amount owed is: %d\n", new_amount2);
		break;
	default:
		printf("Unknown county\n");
		break;
	}

	
	return 0;
}