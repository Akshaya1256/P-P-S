#include<stdio.h>
void main()
{
int num,res;
printf("enter the num");
scanf("%d",&num);
res=num++;
printf("%d\n",res);
res=++num;
printf("%d\n",res);
res=num--;
printf("%d\n",res);
res=--num;
printf("%d\n",res);
return;
}
