#include<stdio.h>
//takin input for the array from usser 
int main ()
{
    int n;
    printf("enter the number of term you want to give in array :");
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("the number in the array is :");
    for (int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}