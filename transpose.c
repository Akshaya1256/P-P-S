#include<stdio.h>
#define MAX 10
void main()
{
	int A[MAX][MAX],row,col,Transpose[MAX][MAX],i,j,B[MAX][MAX];
printf("row,col are\n");
scanf("%d%d",&row,&col);
printf("Matrix A elements is\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&A[i][j]);
	}
}
printf("Matrix B elements\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		scanf("%d",&B[i][j]);
	}
}
printf("Matrix A is\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%5d",&A[i][j]);
	}
	printf("\n");
}
printf("Matrix B is\n");
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		printf("%5d",B[i][j]);
	}
	printf("\n");
}
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		Transpose[j][i]=A[i][j];
	}
}
printf("Transpose of matrix A is \n");
for(i=0;i<col;i++)
{
	for(j=0;j<row;j++)
	{
		printf("%5d",Transpose[i][j]);
	}
	printf("\n");
}
for(i=0;i<row;i++)
{
	for(j=0;j<col;j++)
	{
		Transpose[j][i]=B[i][j];
	}
}
printf("Tranpose of matrix B is\n");
for(i=0;i<col;i++)
{
	for(j=-0;j<row;j++)
	{
		printf("%5d",Transpose[i][j]);
	}
	printf("\n");

}

}

