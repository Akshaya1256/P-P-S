#include<stdio.h>
void main()
{
	int a,b,c,d,e,x;
	printf("Enter amount");
        scanf("%d",&x);
	a=x/500;
	b=x%500/100;
	c=x%500%100/10;
        printf("%d notes of 500 %d notes of 100 %d notes of 10",a,b,c);
}
