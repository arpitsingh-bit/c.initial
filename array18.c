#include<stdio.h>
int product(int arr[],int n);

int main()
{
 
 int n;
 printf("enter the number of term u want to take in array:");
 scanf("%d",&n);
 int arr[n];

 for(int i=0;i<n;i++)
 {
    printf("enter the number u want to store in array");
    scanf("%d",&arr[i]);

 }
 printf("your enterd number in the array\n");
 for(int i=0;i<n;i++)
 {
    printf("%d\t",arr[i]);
 }
 printf("\n");
 printf("product of all the term in array is %d",product(arr,n));

}
int product(int arr[],int n)
{
int product=1;
for(int i=0;i<n;i++)
{
    product =product*arr[i]; 
}
return product;
}