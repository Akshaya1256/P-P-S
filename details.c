#include<stdio.h>
void main()
{
	int Age;
	char Name[20];
	float Salary;
	char Gender,DOB[10];
	printf(" give name,age,gender,dob,salary ");
	fflush(stdin);
	gets(Name);
	scanf("%d",&Age);
	scanf(" %c",&Gender);
	scanf("%s",DOB);
	scanf("%f",&Salary);
	printf(" \nName    :%s \n Age     :%d \n Gender  :%c \n DOB     :%s \n Salary  :%f",Name,Age,Gender,DOB,Salary);
}
