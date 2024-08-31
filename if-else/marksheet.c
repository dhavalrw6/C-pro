#include<stdio.h>
void main()
{
    int rollno, sub1, sub2, sub3, total;
    float avg;
    char name[20];

    printf("Enter Roll No:- ");
    scanf("%d",&rollno);

    printf("Entter Name:- ");
    scanf("%s",&name);

    printf("Enter Sub1:- ");
    scanf("%d",&sub1);

    printf("Enter Sub2:- ");
    scanf("%d",&sub2);

    printf("Enter Sub3:- ");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;


    printf("\n Roll No:- %d",rollno);
    printf("\n Name:- %s",name);
    printf("\n Sub1: %d",sub1);
    printf("\n Sub2: %d",sub2);
    printf("\n Sub3: %d",sub3);
    printf("\n Total: %d",total);
    printf("\n avg: %f",avg);

    if(sub1 >= 35 && sub2>=35 && sub3>=35)
    {
        printf("\n Pass");
        
        if(avg>=80)
        {
            printf("\n Grade A");
        }
        else if(avg>=60)
        {
            printf("\n Grade B");
        }
        else if(avg>=50)
        {
            printf("\n Grade C");
        }
        else
        {
            printf("\n Pass Class");
        }
    }
    else
    {
        printf("\n Fail");
    }

    

}