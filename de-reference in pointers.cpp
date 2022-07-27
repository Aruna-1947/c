#include<stdio.h>
main()
{
	int *ptr,var1,var2;
	ptr=&var1;
	*ptr=25;
	*ptr+=10;
	printf("Variable 1 contains: %d\n",var1);
	var2=*ptr;
	printf("Variable 2 contains :%d\n",var2);
	ptr=&var2;
	*ptr+=20;
	printf("Now variable 2 contains :%d\n",var2);
}
