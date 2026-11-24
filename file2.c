#include<stdio.h>
//understanding function of write mode while opening the file 

int main()
{
    FILE *fptr;
    fptr = fopen("text.txt","w");
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
// we observe that using write mode automaticaly created file 