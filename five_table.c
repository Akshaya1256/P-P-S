#include<stdio.h>
void main()
{
int num,num1,product;
num=5;
num1=1;
while(num1<=10)
{
product=num*num1;
printf("%d*%d=%d\n",num,num1,product);
num1=num1+1;
}
printf("end of while loop");
return;
}
