#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,m,n,a[10][10],b[10][10],c[10][10];
	c[i][j]=0;
	printf("Enter no of rows and columns : ");
	scanf("%d%d",&m,&n);
	printf("Enter elements into matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element a[%d][%d] :",i+1,j+1);
		    scanf("%d",&a[i][j]);
	
			}
		}
		printf("Entered matrix is : ");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d  ",a[i][j]);
				if(j==n-1)
				printf("\n\n");
				}
			}
printf("Enter elements into matrix: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter element b[%d][%d] :",i+1,j+1);
		    scanf("%d",&b[i][j]);
	
			}
		}
		printf("Entered matrix is : ");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				printf("%d  ",b[i][j]);
				if(j==n-1)
				printf("\n\n");
				}
			}
		
		for(i=0;i<m;i++)
		{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)	
		{
			c[i][j]+=a[i][k]*b[k][j];
			
			}
			}
		}
		printf("Matrix mutiplication is : ");
		printf("%d",c[i][j]);
}
