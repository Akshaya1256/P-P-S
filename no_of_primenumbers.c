#include<stdio.h>
void main()
{
int i,j,m=0,n;
printf("enter the num");
scanf("%d",&n);
for(i=1;i<n;i++){
for(j=2;j<i;j++)
if(i%j==0)
m++;}
if(m==0)
printf("%d",i);
m=0;
return;
}
