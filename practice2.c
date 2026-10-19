#include<stdio.h>
int main()
{
    int n;
    for(;;)
    {
        printf("Enter the number: ");
        scanf("%d", &n);
        if(n>33)
        {
            printf("value is more than target\n");

        }
        else if(n<33)
        {
            printf("value is less than target\n");
        }
        else{
            break;
        }
    }
    printf("congratulation u have guessed the correct number");
    return 0;
}