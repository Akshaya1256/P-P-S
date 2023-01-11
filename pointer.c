#include<stdio.h>
void main()
{
	int *ptr,a[15],n,i;
	printf("n");
scanf("%d",&n);
ptr=&a[0];
for(i=0;i<n;i++)
{
	scanf("%d",ptr);
	ptr++;
}
ptr=&a[0];
for(i=0;i<n;i++)
{
	printf("%d\t",*ptr);
	ptr++;
}
}

