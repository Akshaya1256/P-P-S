#include<stdio.h>
#include<math.h>
void arm();
void main()
{
	int n,res;
	scanf("%d",&n);
arm(n);
}
void arm(int x)
{
	int sum,rem,i;
	i=x;
	sum=0;
	while(x>0)
	{
		rem=x%10;
		sum=sum+pow(rem,3);
		x=x/10;
	}
if(sum==i)
                printf("%d is armstrong",i);
        else
                printf("%d is not armstrong",i);
}

