#include<stdio.h>
#define MAX 10
void main()
{
	int A[MAX][MAX],B[MAX][MAX],C[MAX][MAX];
	int r1,r2,c1,c2,i,j;
	printf("enter r1,r2,c1,c3");
	scanf("%d%d%d%d",&r1,&r2,&c1,&c2);
        printf("a matrix");
	if(r1==r2&&c1==c2)
	{
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&A[i][j]);
				printf("%5d",A[i][j]);
			}
			printf("\n");
		}

	}
	printf("b matrix");
	{
		for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&B[i][j]);
			printf("%5d",B[i][j]);
		}
		printf("\n");
	}
	}
       {
	       printf("c matrix\n");
       	       for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			C[i][j]=A[i][j]+B[i][j];
			printf("%5d",C[i][j]);
		}
		printf("\n");
	}
       } 
 }
