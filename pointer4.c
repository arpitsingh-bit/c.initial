#include<stdio.h>
int main ()
{
    char ch;
    
    char *ptr1=&ch;
    for(*ptr1='A';*ptr1<='Z';(*ptr1)++)
    {
        printf("%c\n",*ptr1);
    }
  
    return 0;
}