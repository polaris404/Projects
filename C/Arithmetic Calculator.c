/************************************************************
              'Calculator' by spicymaterial
************************************************************/

#include<stdio.h>
main ()
{	while(1)
	{
	int choice,a,b;
	printf("Enter the choice:\n");
	printf("1. Addition of two numbers\n");
	printf("2. Substraction of two numbers\n");
	printf("3. Multiplication of two numbers\n");
	printf("4. Division of two numbers\n");
	printf("5. Exit\n");
	scanf("%d",&choice);
	if(choice==5)
	break;
	printf("Enter two numbers:\n");
	scanf("%d%d",&a,&b);
	if(choice==1)
	printf("Result : %d\n",a+b);
	if(choice==2)
	printf("Result : %d\n",a-b);
	if(choice==3)
	printf("Result : %d\n",a*b);
	if(choice==4)
	printf("Result : %lf\n",(double)a/b);
	}
}
