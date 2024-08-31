#include<stdio.h>

void main()
{
   FILE *p = fopen("data1.txt","w");
   char data[1000];
    if(p == NULL)
    {
        printf("File Not Open..");
    }
    else{
        // while(fgets(data,5,p) != NULL){
        // printf("%s",data);
        // }
        // fputs("\n",p);
        printf("Enter String:- ");
        gets(data);
        fputs("\n",p);
        fputs(data,p);
        printf("Data add...");
    }
    fclose(p);

    printf("\n\n-----------------------------\n\n");

    p = fopen("data1.txt","r");

    if(p == NULL)
    {
        printf("File Not Open.");
    }
    else{
        while(fgets(data,5,p) != NULL){
        printf("%s",data);
        }
    }


    fclose(p);

}