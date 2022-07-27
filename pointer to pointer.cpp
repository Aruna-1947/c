#include<stdio.h>
#include<conio.h>
main()
{
	int *ptr1,*ptr2;
	int num;
	ptr1=&num;
	ptr2=&ptr1;
	*ptr1=100;
	printf("Variable num contains: %d\n",num);
	**ptr2=200;
	printf("Variable num contains: %d\n",num);
	num=300;
	printf("ptr2 is pointing to %d ",**ptr2);
	
}
