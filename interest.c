#include<stdio.h>
#include<math.h>
void main()
{
	float s,p,t,r,c;
	printf(" give ptr values");
	scanf("%f %f %f",&p,&t,&r);
	s=(p*t*r)/100;
	printf("give pr value");
	scanf("%f %f %f",&p,&r,&t);
	c=p*pow((1+r/100),t);
	printf("s=%f c=%f",s,c);
}
