#include<stdio.h>
void main()
{
	int tomato,carrot,onion,brinjal,a,b,c,d,total;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	tomato=a*30;
	carrot=b*20;
	onion=c*25;
	brinjal=d*25;
	total=tomato+carrot+onion+brinjal;
	printf("total bill=%d",total);
}
