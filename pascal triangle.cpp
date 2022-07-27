#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[6];
	int sum,product,i;
	float mean;
	printf("Enter elements into the array : \n");
	for(i=0;i<6;i++)
	{
		printf("arr[%d] : \n",i);
		scanf("%d",&arr[i]);
		}
    sum=0;
    product=1;
    for(i=0;i<6;i++)
    {
		sum=sum+arr[i];
	}
		printf("Sum of the array is : %d ",sum);
	
	for(i=0;i<6;i++)
	{
		product=product*arr[i];
	}
		printf("Product of array is : %d ",product);
		
		mean=sum/6;
		printf("Mean of the array is : %f ",mean);
		getch();
		return 0;
}
