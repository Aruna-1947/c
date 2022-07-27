#include<stdio.h>
#include<conio.h>
#include<string.h>
struct item
{
	char name[20];
	int quality;
	float quantity;
	int cost;
	int amount;
};
int main()
{
	struct item A1;
	struct item *ptr;
	ptr=&A1;
	printf("\n\nEnter product name : ");
	gets(ptr->name);
	printf("\n\nEnter price : ");
	scanf("%d",&ptr->cost);
	printf("\n\nEnter quantity : ");
	scanf("%f",&ptr->quantity);
	printf("\n\nEnter quality : ");
	scanf("%d",&ptr->quality);
	
	ptr->amount=(float)ptr->quantity*ptr->cost;
	
	printf("\n\nItem name is : %s",ptr->name);
	printf("\n\nItem cost is : %d ",ptr->cost);
	printf("\n\nItem quantity is : %f ",ptr->quantity);
	printf("\n\nItem quality is : %d ",ptr->quality);
	printf("\n\nItem total amount is : %f ",ptr->amount);
}
