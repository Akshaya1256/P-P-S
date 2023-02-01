#include<stdio.h>
float addition();
void main()
{
	int r=5,s=20;
	float f=3.5,res;
	res=addition(r,s,f);
	printf("%f",res);
}
float addition(int x,int y,float z)
{
	z=x+y+z;
	return z;
}

