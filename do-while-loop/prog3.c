#include<stdio.h>
void main()
{
    int i=0;

    loop:

    if(i<5)
    {
        printf("%d, ",i);
        i++;
        goto loop;
    }

}