#include <stdio.h>
#include <stdlib.h>

void noBanknotes(int numbers[], int* amount)
{
    printf("For %dTL, the ATM will give the following banknotes:\n", *amount);
        for (int i = 0; i < 5; i++) { //loop for numbers[5] array
            int divide = *amount / numbers[i];
            if (divide > 0) {
                printf("%d unit(s) of %dTL\n", divide, numbers[i]);
            }
            *amount = *amount - numbers[i] * divide;
    }
}

int main(void)
{
    int amount;
    int numbers[] = {100, 50, 20, 10, 5}; //our banknotes
    do {
        printf("Enter the amount to be withdrawn:\n");
        scanf("%d", &amount);
        if(amount < 0) {
            exit(0);
        }
    } while (amount % 5 != 0);

    noBanknotes(numbers, &amount); //calling the function, put numbers and adress of amount

    return 0;
}