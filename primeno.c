#include<stdio.h>
void main()
{
	int i,n,c=0;
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%i==0)
	        c++;
		i++;
	}
	if(c==2)
	{
	       	printf("%d is prime",n);
	}
	else
	{
		printf("%d is not prime",n);
	}
}

