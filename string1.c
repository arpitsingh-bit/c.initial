#include<stdio.h>
void print(char arr[]);
int main()
{
    char arr[]="arpit";
    char arr1[]="singh";

  print(arr);
  print(arr1);
  return 0;
}
void print(char arr[])
{
    for (int i=0;arr[i]!='\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\t");
}