#include<stdio.h>
void main()
{
	int a, b, ch;
	printf("Enter no 1:");
	scanf("%d",&a);
	
	printf("Enter no 2:");
	scanf("%d",&b);

	printf("1. Addition");
	printf("\n2.Substraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n.Enter YR Choice =");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			printf("Addition of a and b is :%d\n",a+b);
			break;
		
		case 2:
			printf("Substraction of a and b is :%d\n",a-b);
			break;
		case 3:
			printf("Multiplication of a and b is :%d\n",a*b);
			break;
		case 4:
			printf("Division of a and b is :%d\n",a/b);
			break;
		default:
			printf("WRONG CHOICE!");
			break;
	}
}