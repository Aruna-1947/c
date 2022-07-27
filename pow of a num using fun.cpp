#include<stdio.h>
#include<conio.h>
int pow(int,int);
int main()
{
	int num1,num2,result;
	printf("Enter the values of num1 and num2 :\n ");
	scanf("%d%d",&num1,&num2);
	result=pow(num1,num2);
	printf("The power of num1 to the num2 is :\n %d",result);
}
int pow(int num1,int num2)
{
	int temp;
	if(num2==0)
	{
		temp=1;
		}
		else if(num2==1)
		{
			temp=num1;
			}
			else 
			{
				temp=num1*pow(num1,num2-1);
		}
		getch();
		return temp;
}
