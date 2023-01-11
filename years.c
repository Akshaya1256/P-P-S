#include<stdio.h>
void main()
{
	int d,w,m,y;
	scanf("%d",&d);
	y=d/365;
	m=d%365/30;
	w=(((d%365)%30)/7);
	d=(((d%365)%30)%7);
	printf("%d years\n %d months\n %d weeks\n %d days",y,m,w,d);
}
