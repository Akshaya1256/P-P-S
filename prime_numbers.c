#include<stdio.h>
void main()
{
int num,i,flag=0;
printf("enter the num");
scanf("%d",&num);
for(i=2;i<=num/2;i++)
if(num%i==0)
flag++;
if(flag==0)
printf("num is prime");
else
printf("num is not a prime number");
return;
}
