#include<stdio.h>
void sample();
void main()
	{
		sample();
		sample();
	}
void sample()
{
	static int x;
	printf("%d",x);
	x++;
}

