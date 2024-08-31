#include<stdio.h>
void main()
{
    // for(int i=1;i<=5;i++)
    // {
    //     if(i==1 || i==3)
    //     {
    //         printf("* * * * * *");
    //     }
    //     else
    //     {
    //         printf("*         *");

    //     }
    //     printf("\n");
    // }

    // for(int i=1;i<=5;i++)
    // {
    //     for(int j=1;j<=5;j++)
    //     {
    //         if(i==1  || i==3 || j==1 || j==5)
    //         {
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
            
    //     }
    //     printf("\n");
    // }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=6-i;j++)
        {
            printf("%d ",j);   
        }

        for(int k=1;k<i*2-1;k++)
        {
            printf("_ ");   
        }
        for(int j=6-i;j>=1;j--)
        {
           printf("%d ",j);
        }
        printf("\n");
    }
}