#include<stdio.h>
void main()
{
    int a,b,c;
    a=30; b=10; c=10;

    if(a==b)
    {   
        printf("a == b");
    }
    else if(a==c)
    {
        printf("a == c");
      
    }else if(c==b)
    {
        printf("c == b");
    }
    else{
        printf("a,b,c !=");
    }
    if(!(a==b || a==c || b==c))
    {
        printf("Hello..");
    }
}