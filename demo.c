#include<stdio.h>

void main()
{
    int x=10,y=20;

    x=x+y; //x=30
    y=x-y; //y=10
    x=x-y; //x=20;

    printf("x = %d",x);
    printf("y = %d",y);

}