//reading data from file
#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr;
   fptr=fopen("txt.txt","r");
   fscanf(fptr,"%c",&ch);
   printf("%c\n",ch);
   fscanf(fptr,"%c",&ch);
   printf("%c\n",ch);
   fscanf(fptr,"%c",&ch);
   printf("%c\n",ch);
   fscanf(fptr,"%c",&ch);
   printf("%c\n",ch);
   fscanf(fptr,"%c",&ch);
   printf("%c\n",ch);
   fclose(fptr);
   return 0;

}