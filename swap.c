#include<stdio.h>
void swap();
void main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("a=%d\nb%d",a,b);
	swap(&a,&b);
	printf("a=%d\nb=%d",a,b);
}
void swap(int *a,int *b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
}


