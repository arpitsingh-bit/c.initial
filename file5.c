//reading data from file using string

#include<stdio.h>
int main()
{
    char ch[100];
    FILE *fptr;
   fptr=fopen("txt.txt","r");
   fscanf(fptr,"%s",ch);
   printf("%s",ch);
   fclose(fptr);
   return 0;

}