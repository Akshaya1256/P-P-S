#include<stdio.h>
void main()
{
int a=4,b=7,add,sub,multiply,divide,mode,choice;
printf("enter the choice");
scanf("%d",&choice);
switch(choice)
{
case 1:add=a+b;
printf("add %d",add);
break;
case 2:sub=a-b;
printf("sub %d",sub);
break;
case 3:multiply=a*b;
printf("multiply %d",multiply);
break;
case 4:divide=a/b;
printf("divide %d",divide);
break;
case 5:mode=a%b;
printf("mode %d",mode);
break;
default:printf("enter the choice between 1 to 5");
break;
}
return;
}
