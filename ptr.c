#include<stdio.h>
void main()
{
	int i,*ptr,a[7];
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<7;i++)
	{
		ptr=&a[i];
		printf("%d\t",*ptr);
	}
}

