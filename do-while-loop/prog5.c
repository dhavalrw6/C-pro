#include<stdio.h>
void main()
{
    int i,sum=1;
    
    for(i=1;i<=5;i++)
    {
        printf("%d, ",i);
        sum *= i;
    }
    printf("\nsum is= %d",sum);
}