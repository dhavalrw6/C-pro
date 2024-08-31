#include<stdio.h>
 void main()
 {
    char name[20];
    int v = 0;
    // first[3]='a';
    printf("Enter name:- ");
    scanf("%s",name);
    
    printf("Name is:- %s\n",name);
    for(int i=0;name[i]!='\0';i++)
    {
        // if(name[i]=='a' || name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
        // {
        //     v++;
        // }
        v++;
    }
    printf("v=: %d",v);

 }