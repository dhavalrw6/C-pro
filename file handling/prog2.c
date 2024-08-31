#include<stdio.h>
void main()
{
    FILE *p = fopen("NewFile.txt","");
    char data[1000];
    if(p != NULL)
    {
        printf("File Create.");
    }

        printf("Enter String:- ");
        gets(data);
        fputs("\n",p);
        fputs(data,p);
        printf("Data add...");

}