#include <stdio.h>
int main()
{
    int a;
    printf("enter the age of person ");
    scanf("%d",&a);
    (a>=18)? printf( "you are elligible to vote and drive\n") : printf("underage\n");
    return 0;
}
