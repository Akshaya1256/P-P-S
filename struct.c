#include<stdio.h>
struct complex
{
int real,imag;
};
struct complex read();
void print(struct complex);
void main()
{
struct complex c1,c2,c3,c4;
c1=read();
c2=read();
c3=read();
print(c1);
print(c2);
print(c3);
}
struct complex read()
{
struct complex c;
printf("enter real ,imag");
scanf("%d%d",&c.real,&c.imag);
return c;
}
void print(struct complex m)
{
printf("\n%d+i%d",m.real,m.imag);
}                                    
