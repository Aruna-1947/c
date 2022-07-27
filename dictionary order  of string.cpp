#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[20],temp[20];
	int i,j,count;
	printf("How many strings you are gong to print : ");
	scanf("%d",&count);
	printf("Enter string one by one : ");
	for(i=0;i<=count;i++);
	gets(str);
	for(i=0;i<=count;i++)
	{
		for(j=i+1;j<=count;j++)
		{
		if(strcmp(str[i],str[j])>0);
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[j]);
			strcpy(str[j],temp[i]);
			}
		}
		printf("Dictionary order is : ");
		for(i=0;i<=count;i++)
		{
			puts(str);
			}
	
}
}
