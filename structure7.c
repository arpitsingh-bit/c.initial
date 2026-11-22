#include<stdio.h>
#include<string.h>
typedef struct information{
    int age;
    char name[100];
    char ocupation[100];
    int salary;

}info;
void print(info p);
int check(info p,info q);
int main()
{
    
  info a[2];
  printf("\n");
  for(int i=0;i<2;i++)
  {
    printf("ENTER THE NAME OF PERAON %d : ",i+1);
   
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
 getchar();
  }
  printf("\n");

  for(int i=0;i<2;i++)
  {
    print(a[i]);
  }
  printf("\n");
   
  int r = check(a[0],a[1]);
  if(r==1)
  {
    printf("OCUPATION OF BOTH PERSON IS SAME ");

  }
  else{
    printf("OCUPATIONN IS DIFFRENT");
  }

  return 0;

}
void print(info p)
{

    
    printf("NAME OF PERSON IS %s \n:",p.name);
    printf("OCCUPATION IS %s\n:",p.ocupation);
    printf("AGE OF PEROSN IS %d \n:",p.age);
    printf("THE SALARY OF PEROSN IS %d\n \n :",p.salary);
    
    printf("\n");


}
int check(info p,info q)
{
    int i;
    for( i=0;p.ocupation[i]!='\0'&& q.ocupation[i]!='\0';i++)
    {
     if(p.ocupation[i] !=q.ocupation[i])
     {
        return 0;
     }
    }
    if(p.ocupation[i]=='\0'&&q.ocupation[i]=='\0')
     {
        return 1;
     }
     else 
     {
        return 0;
     }
}
