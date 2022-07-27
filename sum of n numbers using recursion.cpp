#include<stdio.h>
#include<conio.h>
int sum(int);
int main()
{
 int result,num;
 printf("Enter no.of terms : ");
 scanf("%d",&num);
 result=sum(num);
 printf("THe result is : %d",result);	
}
int sum(int num)
{
	if(num>0)
	{
	return num+sum(num-1);
}
	else return 0;
	
}r
