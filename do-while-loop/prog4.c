#include<stdio.h>
void main()
{
    int a=0,b=1,c,i;

    for(i=1;i<=10;i++)
    {   // a, b, c
        // 0, 1, 1, 2
        c = a; // 0 1 1 2
        a = c + b; //1 1 2 3
        b = c; // 0 1 1 2
        printf("%d, ",c);
    }

}