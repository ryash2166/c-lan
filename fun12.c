//c input number sum using function.

#include<stdio.h>

int sum();
int sum()
{
	int a,s=0,n,c;
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		scanf("%d",&c);
		s=s+c;
	}
	printf("The sum of all number is %d.",s);
	return 0;
}
void main()
{
	sum();
}