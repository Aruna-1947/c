#include<stdio.h>
#include<conio.h>
#include<string.h>
struct patient
{
	char name[20];
	int age;
	int weight;
	float height;
};
int main()
{
	struct patient p1;
	p1.name;
	p1.age=23;
	p1.weight=54;
	p1.height=180.56;
	strcpy(p1.name,"malaria");
	printf("\n Name of the patient is : %s ",p1.name);
	printf("\nAge of the student is : %d ",p1.age);
	printf("\nWeight of the patient is : %d ",p1.weight);
	printf("\nheight of the student is : %f ",p1.height);
{

	struct patient p2;
	p2.name;
	p2.age=69;
	p2.weight=233;
	p2.height=569.46;
	strcpy(p2.name,"Fever");
	printf("\nName of the patient is : %s ",p2.name);
	printf("\nAge of the student is : %d ",p2.age);
	printf("\nWeight of the patient is : %d ",p2.weight);
	printf("\nheight of the student is : %f ",p2.height);
}
}
