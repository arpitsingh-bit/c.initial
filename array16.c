#include<stdio.h>
//reversing array 
void reversearray(int arr[],int n);
void printarray(int arr[],int n);
int main()
{
    int arr[]={1,3,24,5,6,8};
    reversearray(arr,6);
    printarray(arr,6);
    return 0;


}
void printarray(int arr[],int n)
{
 for(int i=0;i<n;i++)
 {
    printf("%d\t",arr[i]);
 }

}
void reversearray(int arr[],int n)

{
for(int i =0;i<=n/2;i++)
{
    int firstbox=arr[i];
    int lastbox=arr[n-1-i];
    
    arr[i]=lastbox;
    arr[n-1-i]=firstbox;
}
}
