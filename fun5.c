//sum using with return. 

#include<stdio.h>

int a();

int a()
{
	int a,b,s;
	scanf("%d %d",&a,&b);
	s=a+b;
	return s;
}
void main()
{
	int d;
	d=a();
	printf("%d",d);
}