#include<stdio.h>
void primeornot();
void main()
{
	int n;
	scanf("%d",&n);
	primeornot(n);
}
void primeornot(int x)
{
	int i,c;
	c=0;
	for(i=1;i<=x;i++)
	{
		if(x%i==0)
		c++;
	}
	if(c==2)
	printf("%d is prime",x);
	else
		printf("%d is not prime",x);

}

