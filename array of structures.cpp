#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employ
{
	int age;
	int salary;
	char name[20];
	int exp;
	char gender;
};
int main()
{
	struct employ emp[20];
	int i;
	emp.age;
	emp.salary;
	emp.exp;
	emp[20].name;
	emp.gender;
	for(i=0;i<20;i++)
	printf("Enter name %d : ",i+1);
	printf("Employ name is %s : ");
	scanf("%s",emp[i].name);
	printf("Enter the salary : ");
	scanf("%d",&emp.salary);
}
