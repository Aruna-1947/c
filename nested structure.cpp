#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{
	char name[20];
	int IDno;
	int age;
	float CGPA;
	
		struct dateofbirth{
	
		int dd;
		int mm;
		int yy;
		}DOB;
};
int main()
{
	struct student std;
	printf("Enter a name : ");
	gets(std.name);
	printf("\n\nEnter a ID number : %d",std.IDno);
	printf("\n\nEnter age : %d ",std.age);
	printf("\n\nEnter CGPA : %f ",std.CGPA);
	printf("\n\nEnter date of birth : %d/\t%d/\t%d/\t ",std.DOB.dd,std.DOB.mm,std.DOB.yy);
	
}
