#include<stdio.h>
void fact();
void main()
{

	fact();
}
void fact(int x)
{
	int n,i,facto=1;
	printf(" give n");
	scanf("%d",&x);
	for(i=1;i<=n;i++)
	{
		facto=facto*i;
printf("%d",i);
if(i==x)
	break;
printf("*");
	}

	printf("=%d",facto);
}

