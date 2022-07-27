#include<stdio.h>
#include<conio.h>
main()
{
int *ptr,num1,num2,sum;
printf("Enter num1 value: \n");
scanf("%d",&num1);
printf("Enter num2 value: \n");
scanf("%d",&num2);
ptr=&num1;
*ptr=num1;
ptr=&num2;
*ptr=num2;
*ptr=*ptr+*ptr;
*ptr=sum;
printf("Sum of num1 and num2 is:%d\n",sum);
return 0;
}


