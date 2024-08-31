#include<stdio.h>

int sum(int *p,int *q)
{
    return *p + *q;
}

void main()
{
    int a=10,b=50;


    printf("sum is: %d",sum(&a,&b));

    // printf("sum of a and b = %d",sum(&a,&b));

}