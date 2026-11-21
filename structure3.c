//typedef use
#include<stdio.h>
#include<string.h>
typedef struct book
{
    int pages;
    char name[100];
    float price;

}book;
int main ()
{
    book a;

    printf("enter the number of pagees in book 1: ");
    scanf("%d", &a.pages);
    printf("enter the price of book: ");
    scanf("%f", &a.price);
    printf("enter the name of the book: ");
    getchar();
    fgets(a.name,100, stdin);
    printf("name of the book is %s", a.name);
    printf("price of book %f\n",a.price);
    printf("no of pages in book are %d",a.pages );

    return 0;
}