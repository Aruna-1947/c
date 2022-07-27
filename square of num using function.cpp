#include<stdio.h>
#include<conio.h>
int sqrt(int);
int main()
{
	int num,result;
	printf("Enter the value of the number : \n ");
	scanf("%d",&num);
	result=sqrt(num);
	printf("The square of the given number is : \n %d ",result);
}
int sqrt(int num)
{
int temp;
if(num==0)
{
	temp=0;
}
else 
{
temp=num*num;
}
getch();
return temp;
}

