#include<stdio.h>
void main()
{
int num;
printf("enter num");
scanf("%d",&num);
if(num>=0)
{
printf("num is positive");
printf("%d",num);
}
else
{
printf("num is negative");
printf("%d",num);
}
printf("end of if else");
return;
}
