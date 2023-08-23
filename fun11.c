//1 to n sum using function.

#include<stdio.h>

int sum();
int sum()
{
	int a,s=0,n,c;
	scanf("%d",&c);
	scanf("%d",&n);
	for(a=c;a<=n;a++)
	{
		s=s+a;
	}
	printf("The sum of all number is %d.",s);
	return 0;
}
void main()
{
	sum();
}