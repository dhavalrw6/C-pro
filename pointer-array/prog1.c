#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int *ptr[5],i,j;
    int l;
    l = sizeof(arr) / sizeof(arr[0]);
    for(i=0;i<5;i++)
    {
        printf("\narr[%d]: %d",i,arr[i]);
    }
    // arr
    // 0 1 2 3 4
    // 1 2 3 4 5
    // ptr
    // 4 3 2 1 0
    // 1 2 3 4 5
    for(i=0, j=l-1; i<l; i++,j--)
    {
        ptr[j] = &arr[i];
    }
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d, ",*ptr[i]);
    }

}