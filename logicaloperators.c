#include<stdio.h>
void main()
{
int a,b,c,result;
printf("enter a,b,c");
scanf("%d %d %d",&a,&b,&c);
result=(a>b)&&(b>c);
printf("%d\n",result);
result=(a>b)||(b>c);
printf("%d/n",result);
result=!(a>b,b>c);
printf("%d\n",result);
return;
}
