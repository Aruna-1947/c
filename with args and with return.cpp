#include<stdio.h>
#include<conio.h>
#include<string.h>
int fun(int,int[],char[]);
int main()
{
	int num,arr[5],i,len,result;
	char str[10];
	printf("Enter the value of number : ");
	scanf("%d",&num);
	len=strlen(str);
	for(i=0;i<5;i++)
	{
		printf("The value of an array is a[%d]=%d ",i,arr[i]);
		}
		printf("Enter a string: ");
		gets(str);
}
int fun(int num,int arr,char str)
{
	int temp;
	if(num!=0)
	{
		temp=arr[i]+10;
	}
	else if(num==0)
	{
		temp=num+10;
		}
		else 
		temp=num*fun(num-1);
		getch();
		
		
		
}
