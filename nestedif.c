#include<stdio.h>
void main()
{
int first_num,second_num,third_num;
printf("enter first_num,second_num,third_num");
scanf("%d %d %d",&first_num,&second_num,&third_num);
if(first_num>second_num)
{
if(first_num>third_num)
printf("%d",first_num);
else
printf("%d",third_num);
}
else
{
if(second_num>third_num)
printf("%d",second_num);
else
printf("%d",third_num);
}
return;
}
