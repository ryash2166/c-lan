//Function using in simple way.

#include<stdio.h>

void has();

void has(int s,int d)
{
	printf("sum %d and %d is %d",s,d,s+d);
}
void main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	has(a,b);
}