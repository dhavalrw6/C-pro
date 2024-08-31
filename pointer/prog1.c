#include<stdio.h>
void main()
{
    int a[] = {10,20,30,40,50};
    int *ptr;
    int *ptr1;
    // & - address of value
    // * - value of address

    ptr = &a[0];
    ptr1 = &a;

    for(int i=0;i<5;i++)
    {
        printf("\n%u value of address %d",ptr+i,*(ptr+i));
    }

}