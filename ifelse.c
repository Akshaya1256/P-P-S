#include<stdio.h>
void main()
{
	char ch;
	printf("ms.girl ch value");
	scanf("%c",&ch);
	if(('A'<=ch) && (ch<='Z'))
	{
		printf("%c is alphabet",ch);
	}
	else
	{
		printf("%c is not alphabet",ch);
	}
}
