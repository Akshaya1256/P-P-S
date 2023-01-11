#include<stdio.h>
void main()
{
int marks;
printf("enter the marks");
scanf("%d",&marks);
if(marks>=70)
printf("distinction");
else if(marks>=60&&marks<70)
printf("first_class");
else if(marks>=50&&marks<60)
printf("second_class");
else
printf("fail");
return;
}
