#include<stdio.h>
void main()
{
    char c = 'a';
    // printf("%c",c+3);

    do
    {   

        printf("%c, ",c);
        c+=4;
    } while (c<='z');
    
    
}