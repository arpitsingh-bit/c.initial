#include<stdio.h>
//input and output of matrix
#define max 10
void matrixprint(int arr[max][max],int row,int col);
int main ()
{    int matrix[max][max];
     int row,  col;
     printf("ENTER THE NUMBER OF ROW: ");
     scanf("%d",&row);
     printf("ENTER THE NUMBER OF COLUM: ");
     scanf("%d",&col);
     printf("\n");
     printf("ENTER THE NUMBER IN MATRIX");
     for(int i=0;i<row;i++)
     {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
     }
     matrixprint(matrix,row,col);

     return 0;

}
void matrixprint(int arr[max][max],int row,int col)
{
       printf("ENTERD ELEMENT IN THE MATRIX ARE :");
       printf("\n");
       for(int i=0;i<row;i++)
       {
        for(int j=0;j<col;j++)
        {
            printf("%d\t",arr[i][j]);
        }
   printf("\n");
       }


}
