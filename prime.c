#include<stdio.h>
void main()
{
	int c,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("%d is factor of n",i);
		}
		else
		{
			printf("%d is not factor of n",i);
		}
	}
}
