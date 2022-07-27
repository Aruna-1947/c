#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter elements into the a matrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d\n",a[i][j]);
		}
	}
	printf("Enter elements into the second mmatrix: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d\n",b[i][j]);
		}
	}
	    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
	}
	}
	 for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
	
	printf("%d",c[i][j]);
	getch();
	return 0;
		
}
}
