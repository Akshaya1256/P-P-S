#include<stdio.h>
int prime();
int main()
{
	int n,res,c;
	printf("give n");
	scanf("%d",&n);
	res=prime(n);
	if(res==1)
		printf("%d is prime",n);
	else
		printf("%d is not",n);
}
int prime(int a)
{
int i,flag;
flag=0;
for(i=1;i<=a;i++)
{
	if(a%i==0)
		flag++;
}
if(flag==2)
	return 1;
	else 
	return 0;
	}


