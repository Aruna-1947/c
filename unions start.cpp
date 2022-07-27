#include<stdio.h>
#include<string.h>
union data
{
	char name[20];
	int age;
	int rank;
	float CGPA;
};
int main()
{
	union data temp;
	printf("Memory allocated by the union is : %d ",sizeof(temp));
	return 0;
}
