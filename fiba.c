#include<stdio.h>
void fiba();
void main()
{
	int n;
	scanf("%d",&n);
	fiba(n);
}
void fiba(int x)
{
	int a,b,c,i;
	a=0;
	b=1;
	c=a+b;
	for(i=3;i<x;++i)
	{
printf("\n%d",c);
a=b;
b=c;
c=a+b;
	
}
}
