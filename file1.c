#include<stdio.h>
//checking the file is existin g or not 

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt","r");
    if(fptr==NULL)
    {
        printf("file dose not exist ");
    }
    else
    {
        printf("file exist ");
        fclose(fptr);
    }
    return 0;
}