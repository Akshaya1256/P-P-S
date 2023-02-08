#include<stdio.h>
#define SIZE 5
int read();
void print();
void sum();
void mul();
void main()
{
	int a[SIZE][SIZE],b[SIZE][SIZE],x,y,r,c;
	printf("rows,cols");
        scanf("%d%d",&r,&c);

	x=read(a,r,c);
	y=read(b,r,c);
	print(a,r,c);
	print(b,r,c);
	sum(x,y,r,c);
	mul(x,y,r,c);

}
int read(int a[SIZE][SIZE],int r,int c)
{
	int i,j;
	printf("mATrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	return a[SIZE][SIZE];
}
void print(int a[SIZE][SIZE],int r,int c)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
}
void sum(int a[SIZE][SIZE],int b[SIZE][SIZE],int r,int c)
{
	int c1[SIZE][SIZE],i,j,sum=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			c1[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("ADDITION MATRIX IS:\n");
	print(c1,r,c);
}
void mul(int a[SIZE][SIZE],int b[SIZE][SIZE],int r,int c)
{
	int c1[SIZE][SIZE],i,j,sum,k;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=0;
			for(k=0;k<r;k++)
			{
				sum+=a[i][k]*b[k][i];
			}
			c1[i][j]=sum;
		}

	}
	printf("PRODUCT MATRIX IS :\n");
	print(c1,r,c);
}

