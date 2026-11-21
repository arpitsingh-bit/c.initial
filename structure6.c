#include<stdio.h>
#include<string.h>
typedef struct information{
    int age;
    char name[100];
    char ocupation[100];
    int salary;

}info;
void print(info p,int n);
int main()
{
    int n;
  printf("ENTER THE NUMBER OF PERPOLE WHOSE DATA YOU WANT TO PRINT : ");
  scanf("%d",&n);
  info a[n];
  printf("\n");
  for(int i=0;i<n;i++)
  {
    printf("ENTER THE NAME OF PERAON %d : ",i+1);
    getchar();
    fgets(a[i].name,100,stdin);
    printf("\n");
    printf("ENTER THE OCUPATION OF PERSON %d : ",i+1);
    fgets(a[i].ocupation,100,stdin);
    printf("\n");
    printf("ENTER THE AGE OF PERSON %d:",i+1);
    scanf("%d",&a[i].age);
    printf("\n");
    printf("ENTER THE SALARY OF PERSON %d : ",i+1);
    scanf("%d",&a[i].salary);

  }
  printf("\n");

  for(int i=0;i<n;i++)
  {
    print(a[i],n);
  }
  printf("\n");

  return 0;

}
void print(info p,int n)
{
    for(int i =0;i<n;i++)
    {
    printf("NAME OF PERSON %d IS %s \n:",i+1,p.name);
    printf("OCCUPATION IS %s\n:",p.ocupation);
    printf("AGE OF PEROSN IS %d \n:",p.age);
    printf("THE SALARY OF PEROSN IS %d\n \n :",p.salary);
    }
    printf("\n");


}
