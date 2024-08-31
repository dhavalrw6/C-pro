#include<stdio.h>
void main()
{
    int num1[3][3],num2[3][3],num3[3][3];
    
    // printf("Enter num1:- \n");

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("Enter num1[%d][%d]:- ",i,j);
            scanf("%d",&num1[i][j]);
        }
    }

    // printf("Enter num2:- \n");

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("Enter num2[%d][%d]:- ",i,j);
            scanf("%d",&num2[i][j]);
        }
    }

    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
         num3[i][j] = num1[i][j] + num2[i][j];  
        }
    }
    printf("\nnum1 is:- \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("\t %d",num1[i][j]);
        }
        printf("\n");
    }
    printf("\nnum2 is:- \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("\t %d",num2[i][j]);
        }
        printf("\n");

    }
    printf("\nnum3 is:- \n");
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            printf("\t %d",num3[i][j]);
        }
        printf("\n");
    }

}