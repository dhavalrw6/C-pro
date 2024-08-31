#include<stdio.h>

void main()
{
    int a,b,c;

    printf("Enter a, b, c:- ");
    scanf("%d %d %d",&a,&b,&c);

    printf("%d \n",a>=b);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("a is MAX");
        }
        else
        {
            printf("c is MAX");
        }
    }
    else
    {
        if(b>=c)
        {
            printf("b is MAX");
        }
        else
        {
            printf("c is MAX");
        }
    }

}