#include<stdio.h>
#include<string.h>
struct details
{
	int reg[50];
	char name[20];
	float cgpa[50];
	struct address
	{
		char village[20];
		char dist[20];
		long int no[50];
	}t[50];
}s[50];
main()
{
    int i,n,count=0;
    long int x;
    float y,avg,sum=0;
	printf("ENTER THE NUMBER OF STUDENTS :");
	scanf("%d",&n);
	printf("****Enter the details of the students ****\n ");
	for(i=0;i<n;i++)
	{
	    printf("ENTER THE DETAILS OF STUDENT %d\n",i+1);
		printf("ENTER THE NAME OF THE STUDENT : ");
		scanf("%s",&s[i].name[i]);
		printf("ENTER THE REGESTRATION NUMBER OF THE STUDENT : ");
		scanf("%d",&s[i].reg[i]);
		printf("ENTER THE CGPA OF THE STUDENT : ");
		scanf("%f",&s[i].cgpa[i]);
		y=s[i].cgpa[i];
		if(y>0 && y<10)
		s[i].cgpa[i]=y;
		else
		{
			printf("plaese enter a valid cgpa");
			return 0;
		}
		printf("ENTER THE ADDRESS OF THE STUDENT :\n ");
		printf("enter the village : ");
		scanf("%s",&s[i].t[i].village);
	    printf("enter the district : ");
		scanf("%s",&s[i].t[i].dist);
		printf("enter the phone number : ");
		scanf("%ld",&s[i].t[i].no[i]);
		x=s[i].t[i].no[i];
		while(s[i].t[i].no[i]!=0)
		{
		s[i].t[i].no[i]=s[i].t[i].no[i]/10;
		count++;
        }
        if(count==10 || count==13)
        {
         s[i].t[i].no[i]=x;
		}
		else
		{
		printf("please enter a valid number ");
		return 0;
		}
		printf("\n");
	}	
	
     for(i=0;i<n;i++)
	{
     printf("THE DETAILS OF THE STUDENT %d\n",i+1);
     printf("==========================\n");
     printf("THE NAME OF THE STUDENT : %s\n",s[i].name);
     printf("THE REGISTRATION NUMBER OF THE STUDENT : %d\n",s[i].reg[i]);
	 printf("THE CGPA OF THE STUDENT : %f\n",s[i].cgpa[i]);
	 printf("THE ADDRESS OF THE STUDENT :\n");
	 printf("%s(village),\n",&s[i].t[i].village);
	 printf("%s(dist),\n",&s[i].t[i].dist);
	 printf("%ld\n",&s[i].t[i].no[i]);
	 sum=sum+s[i].cgpa[i];
	 printf("\n");
	}
	printf("THE NUMBERS OF THE STUDENT WHO ARE ABOVE AVERAGE CGPA\n");
	avg=count/n;
	for(i=0;i<n;i++)
	{
		if(s[i].cgpa[i]>avg)
		printf("%ld",s[i].t[i].no[i]);
	}
}
