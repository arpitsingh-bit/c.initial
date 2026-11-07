#include<stdio.h>
int shorted_check(int arr[],int n);
int main()
{
    int n;
    printf("enter the number of term in array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the number%d",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("entered number in array");
    for(int i=0;i<n;i++)
    {
     printf("%d\t",arr[i]);
    }
    printf("\n");
    int u=shorted_check(arr,n);
    if(u==1)
    {
        printf("array is shorted");

    }
    else{
        printf("array is not shorted");
    }
    return 0;
}
int shorted_check(int arr[],int n)
{
 for(int i=0;i<n-1;i++)
 {
    if(arr[i]>arr[i+1])
    {
        return 0;
    }
 }
 return 1;
}