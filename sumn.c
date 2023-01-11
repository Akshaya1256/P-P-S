#include<stdio.h>
void main()
{
	int i,sum=0,n;
	printf("give n ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("sum=%d",sum);
}
