#include <stdio.h>

int findMinInTwo(int x, int y)
{
    int min = x;
    if (y < x)
    {
        min = y;
    }
    return min;
}

int findMaxInTwo(int x, int y)
{
    int max = x;
    if (y > x)
    {
        max = y;
    }
    return max;
}

int main()
{
    int no1, no2, no3, no4, no5;

    printf("enter 5 integers: ");
    scanf_s("%d %d %d %d %d", &no1, &no2, &no3, &no4, &no5);

    printf("min is: %d\n", findMinInTwo(findMinInTwo(findMinInTwo(findMinInTwo(no1, no2), no3), no4), no5));
    printf("max is: %d\n", findMaxInTwo(findMaxInTwo(findMaxInTwo(findMaxInTwo(no1, no2), no3), no4), no5));

    return 0;
}