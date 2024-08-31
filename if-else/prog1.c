#include<stdio.h>
void main()
{
    int num1,num2;

    printf("Enter Num1:- ");
    scanf("%d",&num1);
    printf("Enter Num2:- ");
    scanf("%d",&num2);

    if(num1>num2)
    {   
        printf("%d",num1>num2);
    }
    else if(num2>num1){
        printf("Num2 is MAX");
    }
    else{
        printf("Num1 == Num2");
    }

}