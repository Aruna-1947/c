#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n,temp,a[12];
	printf("Enter n value: ");
	scanf("%d",&n);
	printf("Enter elements into the array: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&a[i]);
		}
		printf("Before sorting elements are: ");
		for(i=0;i<n;i++)
		{
			printf("%d",a[i]);
			}
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i;j++)
				{
					if (a[j]>a[j+1])
					{
						temp=a[j];
						a[i]=a[j+1];
						a[j+1]=temp;
						}
					}
				}
		printf("After sorting the elements are : ");
		{
		for(i=0;i<n;i++)
		{
			scanf("%d\n",&a[i]);
		}
			printf("%d",a[i]);
			getch();
			return 0;
	}
	}
