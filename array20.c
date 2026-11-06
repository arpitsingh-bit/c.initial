#include<stdio.h>
int productofarray(int arr[],int a,int b);
int main()
{
    int n;
    printf("enter the number of term you want to fill in array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the number %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("your enterd number in array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);

    }
    printf("\n");
    int digit;
    printf("enter the number your want to remove from array for multiplication\n");
    scanf("%d",&digit);
   
    
     printf("array after removing that element\n");
     printf("\n");
     for(int i=0;i<n;i++)
     {
        if(arr[i]!=digit)
        
        {
            printf("%d\t",arr[i]);
        }
     }
  int product =   productofarray(arr,n,digit);

printf("product of all term in array except %d is %d:",digit,product);
return 0;

}
int productofarray(int arr[],int n, int b)
{
    int p=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=b)
        {
            p=p*arr[i];
        }
    }
    return p;
}