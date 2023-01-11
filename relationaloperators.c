#include<stdio.h>
void main()
{
int first_num,second_num,result;
printf("enter the first_num,second_num\n");
scanf("%d,%d",&first_num,&second_num);
result=first_num==second_num;
printf("%d",result);
result=first_num!=second_num;
printf("%d",result);
result=first_num<second_num;
printf("%d",result);
result=first_num<=second_num;
printf("%d",result);
result=first_num>second_num;
printf("%d",result);
result=first_num>=second_num;
printf("%d",result);
return;
}
