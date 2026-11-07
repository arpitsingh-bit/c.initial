#include<stdio.h>
//sum of two matrix
#define max 10
void matrixprint(int arr[max][max],int row,int col);

void sumofmatrix(int arr[max][max],int arr1[max][max],int row,int col);
int main ()
{
    int row ,col;
    printf("ENTER THE NUMBER OF ROW AND COLUM IN 1st MATRIX: ");
    scanf("%d %d",&row,&col);
    printf("\n");
    printf("ENTER THE NUMBER OF ROW AND COLUM IN MATRIX 2:");
    int row1,col1;
    scanf("%d %d",&row1,&col1);
    printf("\n");
    if(row==row1&&col==col1)
    {
    int mat1[max][max];
    printf("ENETR THE ELEMET FOR MATRIX 1:");
    printf("\n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
             printf("ENTER THE ELEMET OF MATRIX[%d][%d]: ",i,j);
        scanf("%d",&mat1[i][j]);
        }
       
    }
    
 printf("\n");
    printf("ENTER THE ELEMET IN MATRIX 2:");
    int mat2[max][max];
    printf("\n");
    for (int i=0;i<row1;i++)
    {
        for(int j=0;j<col1;j++)
        {
            printf("ENTER THE ELEMENT OF MATRIX[%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);

        }
    }
    matrixprint(mat1,row,col);
    printf("\n");
    matrixprint(mat2,row,col);
    printf("\n");
    sumofmatrix(mat1,mat2,row,col);
    return 0;
}
else{
    printf("ERROR NUMBER OF ROW AND COLLUM IN BOTH MATRIX SCHOULD BE SAME ");

}
return 0;
    
}
void matrixprint(int arr[max][max],int row,int col)
{
   printf("YOUR MATRIX IS :");
   printf("\n");
   for(int i =0;i<row;i++)
   {
    for (int j=0;j<col;j++)
    {
        printf("%d\t",arr[i][j]);
    }
    printf("\n");
   }
}
void sumofmatrix(int arr[max][max],int arr1[max][max],int row,int col)
{
int sum[max][max];
  for(int i =0;i<row;i++)
{
    for(int j=0;j<col;j++)
    {
        sum[i][j]=arr[i][j]+arr1[i][j];
    }

}
printf("MATRIX AFTER ADDITION: ");
printf("\n");
for(int i=0;i<row;i++)
{
    for(int j =0;j<col;j++)
    {
   printf("%d\t",sum[i][j]);
    }
    printf("\n");

}

}