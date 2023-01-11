#include<stdio.h>
void main()
{
	float sarea,volume,PI,r;
	printf("give r value");
	scanf("%f",&r);
	PI=3.14;
	volume=4/3*PI*r*r*r;
	sarea=4*PI*r*r;
	printf("volume=%f sarea=%f",volume,sarea);
}

