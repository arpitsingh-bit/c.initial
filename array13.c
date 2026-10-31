#include<stdio.h>
int sumofarray(int arr[],int n);
int main()
{
    int n;
    printf("enter the number of term you want to take i array");
    scanf("%d",&n);
    int arr[n];
 for(int i =0;i<n;i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("your numer enterd in array is\n");
 for(int i =0;i<n;i++)
 {
    printf("%d\t",arr[i]);
 }
 int sum = sumofarray(arr,n);
 printf("\nsum of all number in a array is %d",sum);
 return 0;
}
int sumofarray(int arr[],int n)
{
    int sum =0;
    for (int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}