//writing data from file
#include<stdio.h>
int main()
{
    char ch;
    FILE *fptr;
   fptr=fopen("txt.txt","w");
   
   fprintf(fptr,"%c",'m');
   fclose(fptr);
   return 0;

}