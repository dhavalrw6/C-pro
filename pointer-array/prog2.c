#include<stdio.h>
void main()
{
    int a,*p1,**p2;
    a=10;

    p1 = &a;
    p2 = &p1;

    printf("\n a is:- %d",a);
    printf("\n p1 is:- %d",*p1);
    printf("\n p2 is:- %d",**p2);
}