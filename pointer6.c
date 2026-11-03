#include<stdio.h>
void reverse(char *str);
int main ()
{
    char str[]="arpit";
    printf("orignal string is %s\n",str);
     
    reverse(str);
    return 0;
}
void reverse(char *str)
{
int count =0;
for(int i =0 ; str[i]!=0;i++)
{
 count++;

}
int l= count -1;
for (int i =0;i<count/2;i++)
{
    int first = str[i];
    int last = str [l-i];
    str[i]=last;
    str[l-i]=first;

}
printf("STRING AFTER REVERSING IS :");
printf("\n");
for(int i =0;str[i]!=0;i++)
{
    printf("%c",str[i]);

}

}