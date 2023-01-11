#include<stdio.h>
void main()
{
	float m,p,c,avg,percent;
	scanf("%f%f%f",&m,&p,&c);
	avg=m+p+c/3;
	percent=(m+p+c/150)*100;
	printf("avg=%f,percent=%f",avg,percent);
}
