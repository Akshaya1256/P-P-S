#include<stdio.h>
void main()
{
	int h,m,s;
        scanf("%d",&s);
	h=s/3600;
	m=((s%3600)/60);
	s=((s%3600)%60);
	printf("hh:%d mm:%d ss:%d",h,m,s);
}
