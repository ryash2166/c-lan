//sum with arguments.
#include<stdio.h>



int s(int a, int b)
{
	int s;
	s=a+b;
	return s;
}
void main()
{
	int c,d,a;
	scanf("%d %d",&c,&d);
	a=s(c,d);
	printf("%d",a);
}