#include<stdio.h>
int sum_of_array(int arr[],int n);
int main()
{
    int n ;
   printf("enter thenumber");

    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    arr[i]=i+i;
    }
    printf("all the number in your array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int sum=sum_of_array(arr,n);
    printf("sum of all the term in array is:%d",sum);
    return 0;

}
int sum_of_array(int arr[],int n)
{
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum= sum+arr[i];
    }
return sum;
}