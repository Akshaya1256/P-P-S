#include<stdio.h>
int main()
{
int i,a,p=0;
printf("give a value to a");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if(a%i==0)
{
p=p=1;
}
}
if(p==0)
{
printf("%d is prime",a);
}
else
{
printf("%d is not prime number",a);
}
}
