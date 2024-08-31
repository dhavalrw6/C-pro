#include<stdio.h>
int main()
{
    int ch,a,b,ans;

    printf("Enter a: ");
    scanf("%d",&a);
    printf("Enter b: ");
    scanf("%d",&b);

    printf("\n Press 1 for Add");
    printf("\n Press 2 for sub");
    printf("\n Press 3 for mul");
    printf("\n Press 4 for div");

    printf("\n ------------------ \n");
    printf("Enter your choice: ");
    scanf("%d",&ch);

   switch (ch)
   {
   case 1:
    ans = a + b;
    printf("\nans1");
    break;
   case 2:
    ans = a - b;
    printf("\nans2");
    break;
   case 3:
    ans = a * b;
    break;
   case 4:
    ans = a / b;
    break;
   default:
    printf("wrong choice");
    break;
   }

    if(ch<=4)
    {
        printf("\n ans is: %d",ans);
    }

}