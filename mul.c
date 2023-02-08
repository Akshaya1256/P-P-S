#include<stdio.h>
#define SIZE 10
void mat();
void trans();
void add();
void main()
{
	int a[SIZE][SIZE],b[SIZE][SIZE],r1,r2,c1,c2,i,j;
	printf("rows and col of matrix A and B");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	printf("matrix A elements\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("matrix B elements\n");
 for(i=0;i<r2;i++)
        {       
                for(j=0;j<c2;j++)
                {       
                        scanf("%d",&b[i][j]);
                }       
              
 mat(a,b,r1,c1,r2,c2);
trans(a,r1,c1);
add(a,b,r1,c1,r2,c2);
}
void mat(int a[SIZE][SIZE],int b[SIZE][SIZE],int r1,int c1,int r2, int c2)
{
	int c[SIZE][SIZE],k,i,j,sum=0;
	if(c1==r2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				sum=0;
			
				for(k=0;k<r1;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
	}
if(r2==c1){

	printf("PRODUCT MATRIX IS:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%5d",c[i][j]);
		}
		printf("\n");
	}
}
}
void trans(int a[SIZE][SIZE],int r1,int c1)
{
	int t[SIZE][SIZE],i,j;

for(i=0;i<r1;i++)
{
        for(j=0;j<c1;j++)
        {
                t[j][i]=a[i][j];
        }
}
printf("\nTRANSPOSE MATRIX IS:\n");
for(i=0;i<c1;i++)
{
        for(j=0;j<r1;j++)
        {
                printf("%d",t[i][j]);
        }
        printf("\n");
}
}
void add(int a[SIZE][SIZE],int b[SIZE][SIZE],int r1,int c1,int r2,int c2)
{
	int c[SIZE][SIZE],i,j;
if(r1==r2 && c1==c2)
{
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}

}
}
void print(int a[SIZE][SIZE],int b[SIZE][SIZE],int r1,int r2,int c1,int c2)
{

 int c[SIZE][SIZE],i,j;
        printf("MATRIX A IS:\n");
         for(i=0;i<r1;i++)
        {
                for(j=0;j<c1;j++)
                {
                        printf("%5d",a[i][j]);
                }
                printf("\n");
        }
        printf("MATRIX B IS:\n");
        for(i=0;i<r2;i++)
        {
               for(j=0;j<c2;j++)
                
                        printf("%5d",b[i][j]);
                }
                printf("\n");
        }

