#include<stdio.h>
#include<string.h>
struct details
{
	int reg;
	char name[20];
	float cgpa;
	struct address
	{
		char village[20];
		char dist[20];
		int no;
	}t[50];
}s[50];
main()
{
    int i,n,p=0,count=0;
    float top;
	printf("ENTER THE NUMBER OF STUDENTS :");
	scanf("%d",&n);
	printf("****Enter the details of the students ****\n ");
	for(i=0;i<n;i++)
	{
	    printf("ENTER THE DETAILS OF STUDENT %d\n",i+1);
		printf("ENTER THE NAME OF THE STUDENT : ");
		scanf("%s",&s[i].name);
		printf("ENTER THE REGESTRATION NUMBER OF THE STUDENT : ");
		scanf("%d",&s[i].reg);
		printf("ENTER THE CGPA OF THE STUDENT : ");
		scanf("%f",&s[i].cgpa);
		printf("ENTER THE ADDRESS OF THE STUDENT :\n ");
		printf("enter the village : ");
		scanf("%s",&s[i].t[i].village);
	    printf("enter the district : ");
		scanf("%s",&s[i].t[i].dist);
		printf("enter the phone number : ");
		scanf("%s",&s[i].t[i].no);
		printf("\n");
	}	
	top=s[p].cgpa;
     for(i=0;i<n;i++)
	{
     printf("THE DETAILS OF THE STUDENT %d\n",i+1);
     printf("==========================\n");
     printf("THE NAME OF THE STUDENT : %s\n",s[i].name);
     printf("THE REGISTRATION NUMBER OF THE STUDENT : %d\n",s[i].reg);
	 printf("THE CGPA OF THE STUDENT : %f\n",s[i].cgpa);
	 printf("THE ADDRESS OF THE STUDENT :\n");
	 printf("%s(village),\n",&s[i].t[i].village);
	 printf("%s(dist),\n",&s[i].t[i].dist);
	 printf("%d\n",&s[i].t[i].no);
	 if(top<=s[i].cgpa)
	 {
	 top=s[i].cgpa;
	 p=i;
	 count++;
     }
     printf("\n");
	}
	
	if(count==0)
	printf("THE TOPPER IS %s",s[p].name);
	else
	{
		printf("****TOPPERS ARE****\n ");
		for(i=0;i<n;i++)
		{
			if(s[p].cgpa==s[i].cgpa);
	        printf("%s\n",s[i].name);
		}
	}
}

