#include<stdio.h>
#include<string.h>
union temp
{
	char name[20];
	int age;
	float height;
	char grade;
};
int main()
{
	union temp var;
	var.name;
	var.age=24;
	var.height=156.78;
	var.grade='A';
	strcpy(var.name,"Aruna Kumari");
	printf("\n\nName is : %s ",var.name);
	printf("\n\nAge is : %d ",var.age);
	printf("\n\nHeight is : %f ",var.height);
	printf("\n\nGrade is : %c ",var.grade);
	return 0;
}
