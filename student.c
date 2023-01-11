#include<stdio.h>
struct student
{
	int rno,marks,age;
	char Name[20];
}s;
void main()
{
	struct student st1,st2,st3;
	printf("\n entert NAME");
gets(st1.Name);
gets(st2.Name);
gets(st3.Name);
printf("\n enter rno,age,marks");
scanf("%d%d%d",&st1.rno,&st1.age,&st1.marks);
scanf("%d%d%d",&st2.rno,&st2.age,&st2.marks);
scanf("%d%d%d",&st3.rno,&st3.age,&st3.marks);
printf("\nFIRST PERSON DETAILS\nNAME:");
puts(st1.Name);
printf("Rno:%d\nAGE:%d\nMARKS:%d",st1.rno,st1.age,st1.marks);
printf("\nSECOND PERSON DETAILS\nNAME:");
puts(st2.Name);
printf("Rno:%d\nAGE:%d\nMARKS:%d",st2.rno,st2.age,st2.marks);
printf("\nTHIRD PERSON DETAILS\n NAME:");
puts(st3.Name);
printf("Rno:%d\nAGE:%d\nMARKS:%d",st3.rno,st3.age,st3.marks);
}
