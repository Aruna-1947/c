#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,a[10],min,temp;
	min=i;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[min])
			i=j;
			}
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		printf("selection sort is %d",a[i]);
}
