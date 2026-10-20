#include<stdio.h>
int main(){
int a =21;
int *ptr =&a;
printf(" %p\n",&a);//adress of a
printf("%p\n",ptr);//adress of what ptr is holding which is a so the value is same
printf("%p\n",&ptr);//adress of ptr
printf("%d\n",a);// value of a
printf("%d\n",*ptr);// vaue at the adres which is tored in ptr




}
