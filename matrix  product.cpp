#include<stdio.h>
#include<conio.h>
int main()
{
	
	int i,j,a[10][10],b[10][10],c[10][10],k,m,n;
	printf("Enetr no.of rows and columns: ");
	scanf("%d%d",&m,&n);
	printf("Enter elements into the first matrix: ");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
		scanf("%d",a[i][j]);
	}
		}
	printf("Enter elements into second matrix: ");
			
			for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		
		scanf("%d",b[i][j]);
	}
		

	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
		for(k=0;k<m;k++)
		{
			c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
printf("output matrix is : ");
scanf("%d",c[i][j]);
getch();
return 0;

		
}
