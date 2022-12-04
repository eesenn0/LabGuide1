#include <stdio.h>

int oddEven(int no1, int no2, int no3, int no4, int no5, int no6, int no7, int no8, int no9, int no10, int odd, int even)
{
    if (no1 % 2 == 0)
    {
        printf("%d is even\n", no1);
        even++;
    }
    else if (no1 % 2 == 1)
    {
        printf("%d is odd\n", no1);
        odd++;
    }
    if (no2 % 2 == 0)
    {
        printf("%d is even\n", no2);
        even++;
    }
    else if (no2 % 2 == 1)
    {
        printf("%d is odd\n", no2);
        odd++;
    }
    if (no3 % 2 == 0)
    {
        printf("%d is even\n", no3);
        even++;
    }
    else if (no3 % 2 == 1)
    {
        printf("%d is odd\n", no3);
        odd++;
    }
    if (no4 % 2 == 0)
    {
        printf("%d is even\n", no4);
        even++;
    }
    else if (no4 % 2 == 1)
    {
        printf("%d is odd\n", no4);
        odd++;
    }
    if (no5 % 2 == 0)
    {
        printf("%d is even\n", no5);
        even++;
    }
    else if (no5 % 2 == 1)
    {
        printf("%d is odd\n", no5);
        odd++;
    }
    if (no6 % 2 == 0)
    {
        printf("%d is even\n", no6);
        even++;
    }
    else if (no6 % 2 == 1)
    {
        printf("%d is odd\n", no6);
        odd++;
    }
    if (no7 % 2 == 0)
    {
        printf("%d is even\n", no7);
        even++;
    }
    else if (no7 % 2 == 1)
    {
        printf("%d is odd\n", no7);
        odd++;
    }
    if (no8 % 2 == 0)
    {
        printf("%d is even\n", no8);
        even++;
    }
    else if (no8 % 2 == 1)
    {
        printf("%d is odd\n", no8);
        odd++;
    }
    if (no9 % 2 == 0)
    {
        printf("%d is even\n", no9);
        even++;
    }
    else if (no9 % 2 == 1)
    {
        printf("%d is odd\n", no9);
        odd++;
    }
    if (no10 % 2 == 0)
    {
        printf("%d is even\n", no10);
        even++;
    }
    else if (no10 % 2 == 1)
    {
        printf("%d is odd\n", no10);
        odd++;
    }

    printf("\nYou've %d odd numbers\n", odd);
    printf("You've %d even numbers", even);

}

int main()
{
    int no1, no2, no3, no4, no5, no6, no7, no8, no9, no10;

    printf("Enter 10 integers: ");
    scanf_s("%d %d %d %d %d %d %d %d %d %d", &no1, &no2, &no3, &no4, &no5, &no6, &no7, &no8, &no9, &no10);

    oddEven(no1, no2, no3, no4, no5, no6, no7, no8, no9, no10, 0, 0);

    return 0;
}