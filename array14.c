#include<stdio.h>
int findingtarget(int arr[],int n,int m);
int main()
{
    int n;
    printf("enter the number of term u want in array");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    printf("number in array is :");
    for(int i =0;i<n;i++)
    {
    printf("%d\t",arr[i]);
    }
    printf("enter the number you want to find in array");
    int m;
    scanf("%d",&m);
   int find = findingtarget(arr,n,m);
    
  if (find==1)
  {
    printf("the nuber u are looking for is present i array");

  }
   else
   {
    printf("enterd number dose not exist in array");
   }
   return 0;

}
int findingtarget(int arr[],int n, int m)

{
    
    for(int i=0; i<n;i++)
    {
        if(m==arr[i])
        {
            return 1;
            
        
        }
    }
    
    return 0;
    
}