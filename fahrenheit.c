#include<stdio.h>
void main()
{
	float c,f;
	printf("give temperature in fahrenheit");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temperature in celsius %f",c);
}
