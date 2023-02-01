#include<stdio.h>
void evenorodd();
void main()
{
	int n;
	scanf("%d",&n);
	evenorodd(n);
}
void evenorodd(int a)
{
	if(a%2==0)
		printf("%d is even",a);
	else
		printf("%d is odd",a);
}

