#include<stdio.h>
#include<conio.h>
int main()
{
	int i,large,a[5]={10,45,6,7,433};
	large=a[0];
	for(i=1;i<5;i++)
	{
		if(a[i]>large)
		{
		large=a[i];
	}
}
		printf("The largest number is:%d ",large);
		
		getch();
		return 0;
}
