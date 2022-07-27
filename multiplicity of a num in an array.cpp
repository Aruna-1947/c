#include<stdio.h>
#include<conio.h>
int main()
{
	int i,key,count,a[5];
	count=0;
	printf("Enter elements into the matrix: ");
	for(i=0;i<5;i++)
	{
	
		scanf("%d",&a[i]);
		
		}
		printf("Enter a number to be search : ");
		scanf("%d",&key);
		for(i=0;i<5;i++)
		{
		if(key==a[i])
		{
		count++;
	}
}
		printf("Keyword is found\n ");
		printf("The keyword is found %d times ",count);
		getch();
	   return 0;	
}

