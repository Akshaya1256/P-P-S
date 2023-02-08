#include<stdio.h>
#define SIZE 10
void mat();
void main()
{
	int a[SIZE][SIZE],r,c,i,j;
printf("GIVE ROWS AND COLUMNS");
scanf("%d%d",&r,&c);
printf("matrix a elements are:");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
printf("\n Matrix A is :\n");
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		printf("%d",a[i][j]);
	}
	printf("\n");
}
mat(a,r,c);
}
void mat(int a[SIZE][SIZE],int r,int c)
{
	int i,j,t[SIZE][SIZE];
for(i=0;i<r;i++)
{
	for(j=0;j<c;j++)
	{
		t[j][i]=a[i][j];
	}
}
printf("\nTRANSPOSE MATRIX IS:\n");
for(i=0;i<c;i++)
{
	for(j=0;j<r;j++)
	{
		printf("%d",t[i][j]);
	}
	printf("\n");
}
}

