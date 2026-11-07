#include<stdio.h>
//maytrix multiplication 
#define max 10
void multiplication(int arr[max][max],int arr1[max][max],int n ,int m ,int b);
void printmatrix(int arr[max][max],int row,int col);
int main ()
{
    int m1[max][max];
    int m2[max][max];
    int row1,col1,row2,col2;
    printf("ENTER THE NUMBER OF ROW IN MATRIX 1 :");
    scanf("%d",&row1);
    printf("\n");
    printf("ENTER THE NUMBER OF COL IN MATRIX 1 :");
    scanf("%d",&col1);
    printf("\n");
    printf("ENTER THE NUMBER OF ROW IN MATRIX 2 :");
    scanf("%d",&row2);
    printf("\n");
    printf("ENTER THE NUMBER OF COL IN MATRIX 2 :");
    scanf("%d",&col2);
    printf("\n");

    if(col1!=row2)
    {
        printf("ERROR NUMBER OF ROW IN MATRIX 1 SCHOULD BE SAME AS NUMBER OF COLUM IN MATRIX 2");
        return 0;

    }
    else
    {
        printf("ENTER THE ELEMET IN MATRIX 1");
        printf("\n");
        for(int i =0 ; i<row1; i++)
        {
            for (int j=0; j<col1;j++)
            {
                printf("ENTER THE EMEMENT[%d][%d]",i,j);
                scanf("%d",&m1[i][j]);

            }
        }
        printf("ENTER THE ELEMENT IN MATRIX 2 :");
        printf("\n");

       for(int i=0; i<row2;i++)
     {
        for(int j=0;j<col2;j++)
        {
          printf("ENTER THE ELEMENT[%d][%d]",i,j);
          scanf("%d",&m2[i][j]);
           

        }

     }    

    }
    printmatrix(m1,row1,col1);
    printf("\n");
    printmatrix(m2,row2,col2);
    printf("\n");
    multiplication(m1,m2,row1,col1,row2);
    return 0;

}
void printmatrix(int arr[max][max],int row,int col)
{
    printf("\n");
    printf("YOUR MATRIX IS :");
    printf("\n");
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);

        }
        printf("\n");

    }

}
void multiplication(int arr[max][max],int arr1[max][max],int n ,int m ,int b)
{
    int mul[max][max];
    printf("\n");
    printf("MATRIX AFTER MULTIPLICATION");
    printf("\n");
    for(int i =0; i<n;i++)
    {
        for(int j=0;j<b;j++)
        {
            mul[i][j]=0;
            for(int k =0;k<m;k++)
            {
                mul[i][j]+=arr[i][k]*arr1[k][j];
            }
            printf("%d\t",mul[i][j]);

        }
        printf("\n");

    }
}
