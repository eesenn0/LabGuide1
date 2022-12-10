/* Write a function calculate that receives the number of credits and the class of a student to compute and return the tuition 
of the student for that semester, according to the below criteria. */

#include <stdio.h>
#include <stdlib.h> // for exit(0)

void tuitonFee(int student_id, int credit, int year, double tuiton_0, double tuiton_1); //function prototype

int main()
{
    int student_id, credit, year;

    printf("Enter the student id (-1 to exit): ");
    scanf_s("%d", &student_id); //student id input

    if (student_id == -1)
    {
        exit(0); // if input is -1, then it will end the program
    }

    printf("Enter the credit: ");
    scanf_s("%d", &credit); //input for how many credit will student(s) take

    printf("Enter year: ");
    scanf_s("%d", &year); //input for which class the student is

    double tuiton_0 = 525 * credit; //if a student take less than or equal to twelve credits
    double tuiton_1 = 4500; //if a student take more than twelve credits, guarantee they pays 4500$

    tuitonFee(student_id, credit, year, tuiton_0, tuiton_1); //calling the function

    return 0;
}

void tuitonFee(int student_id, int credit, int year, double tuiton_0, double tuiton_1) //our function
{
    if (credit <= 12)
    {
        if (year == 4)
        {
            printf("Student with id %d will pay tuiton %.0lf$", student_id, tuiton_0 - (tuiton_0 * 0.15)); //if a student is fourth grade, then 0.15 discount
        }
        else
        {
            printf("Student with id %d will pay tuiton %.0lf$", student_id, tuiton_0);
        }
    }
    else if (credit > 12)
    {
        for (int i = 12; i < credit; i++) //to find how many more credits than twelve credits.
        {
            tuiton_1 += 750;
        }
        if (year == 4)
        {
            printf("Student with id %d will pay tuiton %.0lf$", student_id, tuiton_1 - (tuiton_1 * 0.15)); //if a student is fourth grade, then 0.15 discount
        }
        else
        {
            printf("Student with id %d will pay tuiton %.0lf$", student_id, tuiton_1);
        }
    }
}