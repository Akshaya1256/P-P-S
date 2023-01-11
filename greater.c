#include<stdio.h>
void main()
{
	int a,b;
	printf("ms.girl a value"); 
	scanf("%d%d",&a,&b);
	if((a<b) && (a!=b))
	{
		printf("%d is greater than %d",b,a);
	}	
	else
	{ 
                printf("%d is not greater than %d",b,a);
	}
}

