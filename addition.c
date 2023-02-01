#include<stdio.h>
void add();
void main()
{
	int a,b;
	float c;
	scanf("%d%d%f",&a,&b,&c);
	add(a,b,c);
}
void add(int x,int y,float z)
{
	float sum;
	sum=x+y+z;
	printf("sum=%f",sum);
}

