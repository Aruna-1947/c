#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student 
{
	char name[20];
	int age;
	float height;
	float CGPA;
	int weight;
};
int main()
{
	struct student std={"Aruna Kumari",18,108.56,98.9,34};
	printf("\n\nThe name of the student is : %s ",std.name);
	printf("\n\nAge is :%d ",std.age);
	printf("\n\nHeight is :%f ",std.height);
	printf("\n\nCGPA is :%f ",std.CGPA);
	printf("\n\nweight is : %d ",std.weight);
	return 0;	
}
