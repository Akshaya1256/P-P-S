#include<stdio.h>
int sample();
void main()
{
	int a;
	a=sample();
	a=sample();
	a=sample();
	printf("%d",a);
}
int sample(int x)
{
	static int count;
	return ++count;
}

