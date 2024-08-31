#include<stdio.h>

union stud
{
    int id;
    char name[50];
    // char name1[50];
    // char name2[50];
    // float avg;
};



int main()
{
     union stud s;
    printf("size %d",sizeof(s));
//    int i;
//    for(i=0;i<=2;i++)
//    {
//         printf("\nStudent[%d]\n",i);
//         printf("Enter id:- "); 
//         scanf("%d",&s[i].id);
//         printf("Enter name:- ");
//         scanf("%s",&s[i].name);
//         printf("Enter avg:- ");
//         scanf("%f",&s[i].avg);
//    }

   
//     for ( i = 0; i <=2; i++)
//     {
//         printf("\n\n student[%d]",i);
//         printf("\n stud id:- %d",s[i].id);
//         printf("\n Name is:- %s",s[i].name);
//         printf("\n Avg is: %.2f",s[i].avg);
//     }
    

    return 0;
}