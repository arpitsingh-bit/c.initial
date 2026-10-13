#include<stdio.h>
void greatingto_citizen(char ch);
int main ()
{
    char ch;
    //nationality of india = i; french=f; usa=u; other wise tell to enter valid nation;
    printf("enter your nationality");
    scanf("%c",&ch);
    greatingto_citizen(ch);
    return 0;

}
void greatingto_citizen(char ch)
{
if(ch=='i'||ch =='I')
{
    printf("Namaste dosto");
}
else if(ch=='u'|| ch=='U')
{
    printf("Hello friends");
}
else if(ch=='f'||ch=='F')
{
    printf("Bonjour friends");

}
else 
{
    printf("Enter valid nationality ");
}
}
//with arggument and without return 