#include<stdio.h>
void main()
{
	int i,r,x;
	scanf("%d",&r);
	for(i=1;i<=r;i++)
	{
		x=r*i;
		printf("%d=%d*%d",x,r,i);
	}
}
