#include<stdio.h>
//finding number in array 
int main()
{
    int arr[]={88,98,90,76,56,43,22,17};
  
    int u = 76;
    for(int i =0; i<8; i++)
    {
        if(u==arr[i])
        {
            printf("enter number is in array");
            
          return 0;
        }
    }
    
        printf("enterd number dose not exist i array");
   
    return 0;
}