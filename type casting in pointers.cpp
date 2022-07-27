#include<conio.h>
#include<stdio.h>
main()
{
int num1;
float num2;
void *ptr;
printf("Enter num1 value: \n");
scanf("%d",&num1);
printf("Enter num2 value: \n");
scanf("%f",&num2);
ptr=&num1;
printf("num1 contains %d\n",*(int *)ptr);
ptr=&num2;
printf("num2 contains %f\n",*(float *)ptr);
return 0;
}
