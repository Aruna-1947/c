#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *file;
	char path[50];
	char ch;
	int characters ,words,lines;
	printf("Enetr Source file path : ");
	scanf("%s",&path);
	file=fopen(path,"r");
	if(file==NULL)
	{
		printf("Unable to open the file : ");
		return 0;
		}
		
		while((ch=fgetc(file)!=EOF)
		{
		
			characters++;
			}
			while(ch=="\n" || ch=='\0')
			{
			lines++;
		}
			if(ch==' ' || ch='\t' ch=="\n" || ch=='\0')
			{
			words++;
		}
		if(characters>0)
		{
			words++;
			lines++;
			}
		printf("%d",characters);
}
