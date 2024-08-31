#include<stdio.h>
int main(){
    int a,b,ans,ch;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("\n press 1 for add");
    printf("\n press 2 for sub");
    printf("\n press 3 for mul");
    printf("\n press 4 for div");

    printf("\n ------------------ \n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
     case 1:
     ans=a+b;
     break;
     case 2:
     ans=a-b;
     break;
     case 3:
     ans=a*b;
     break;
     case 4:
     ans=a/b;
     break;
    }

    return 0;
}