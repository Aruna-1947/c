#include<stdio.h>
#include<conio.h>
int main()
{
	int i,found,key,a[5]={10,49,10,37,47};
	found=0;
	printf("Enter a element to be search: ");
	scanf("%d",&key);
	for(i=0;i<5;i++)
	{
		if(key==a[i])
		{
		found++;
	}
		}
		printf("key is found\n");
		printf("keyword is repeated is for %d times",found);
		getch();
		return 0;
}
