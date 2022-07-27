#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5]={10,20,30,40,50},sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
		}
		printf("%d\n",sum);
		getch();
		return 0;
}
