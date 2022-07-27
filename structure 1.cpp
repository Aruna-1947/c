#include<stdio.h>
#include<string.h>
struct student
{
	char name[20];
	int age;
	char branch[10];
	char gender;
};
int main()
{

struct student s1;
s1.age;
printf("Enter the age : ");
scanf("%d",&s1.age);
strcpy(s1.name,"Aruna Kumari");
printf("Name of the student is : %s\n ",s1.name);
printf("Age of the student is : %d ",s1.age);
return 0;
}
