#include<stdio.h>
void main()
{
    for(int i=1;i<=10;i++)
    {
        
        if(i==5 || i==7 || i==9)
        {
            continue;
        }
        printf("%d, ",i);
    }
    
}