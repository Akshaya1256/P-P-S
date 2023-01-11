#include<stdio.h>
#define SIZE 3
void main()
	{
		int A[SIZE][SIZE],B[SIZE][SIZE],C[SIZE][SIZE],row,col,i,sum;
		printf("Matrix A elements is\n");
for(row=0;row<SIZE;row++)
{
        for(col=0;col<SIZE;col++)
        {
                scanf("%d",&A[row][col]);
        }
}
printf("Matrix B elements\n");
for(row=0;row<SIZE;row++)
{
        for(col=0;col<SIZE;col++)
        {
                scanf("%d",&B[row][col]);
        }
}
printf("Matrix A is\n");
for(row=0;row<SIZE;row++)
{
        for(col=0;col<SIZE;col++)
        {
                printf("%5d",&A[row][col]);
        }
        printf("\n");
}
printf("Matrix B is\n");
for(row=0;row<SIZE;row++)
{
        for(col=0;col<SIZE;col++)
        {
                printf("%5d",B[row][col]);
        }
        printf("\n");
}
for(row=0;row<SIZE;row++)
{
        for(col=0;col<SIZE;col++)
        {
sum=0;
{
	for(i=0;i<SIZE;i++)
	{
		sum+=A[row][i]*B[i][col];
	}
	C[row][col]=sum;
}
}
printf("Product matrix is \n");
for(row=0;row<SIZE;row++)
{
	for(col=0;col<SIZE;col++)
	{
		printf("%5d",C[row][col]);
	}
	printf("\n");
}
}
}

