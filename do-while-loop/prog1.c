#include<stdio.h>

int main()
{
    int i,j;
    for(i=5;i>=1;i--) //2
    {
        for(j=1;j<=i;j++)//5
        {
            printf("%d ",j); //5
        }
        printf("\n");
    }
    for(i=5;i>=1;i--) //2
    {
        for(j=1;j<=i;j++)//5
        {
            printf("%d ",j); //5
        }
        printf("\n");
    }
    return 0;
}