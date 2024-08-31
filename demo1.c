#include<stdio.h>

int main()
{
    int avg;

    printf("Enter avg:- ");
    scanf("%d",&avg);

    if(avg>=80)
    {
        printf("Grade A");
    }
    else if(avg>=60)
    {
        printf("Grade B");
    }
    else if(avg>=50)
    {
        printf("Grade C");
    }
    else
    {
        printf("Pass Class");
    }

    return 0;
}