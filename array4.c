#include<stdio.h>

int main()
{
    int array[5];
    for(int i=0;i<5;i++)
    {
    printf("enter the number");
    scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",array[i]);
    }
     
return 0;
}