#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,m,n,a[10][10],t[10][10];
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

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[j][i]=a[i][j];
			}
		}
		
printf("Transpose of the matrix is : ");
for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
	printf("%d",t[i][j]);
	if(j==n-1)
	printf("\n\n");
}
}
}
		
		
		
		
