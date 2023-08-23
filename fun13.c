//FACTORIAL

#include<stdio.h>

int fact(int n);
int fact(int n)
{
	int a,s;
	if(n<=1)
	{
		return 1;
	}
	else
	{
	s=n*fact(n-1);
	return s;
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	printf("The fact of all number is %d.",fact(n));
}