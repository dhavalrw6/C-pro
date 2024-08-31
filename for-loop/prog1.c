//         1
//       1 2
//     1 2 3
//   1 2 3 4
// 1 2 3 4 5


// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++) //i=2
    {
       for(int k=4;k>=i;k--)
       {
            printf("  ");
       }
       for(int j=1;j<=i;j++) // j=3
       {
            printf("%d ",j); //2
       }
       for(int j=i-1;j>=1;j--) // j=3
       {
            printf("%d ",j); //2
       }
       printf("\n");
    }
}


//       1
//      12
//     123
//    1234
//   12345
