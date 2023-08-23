//whether a number is perfect or not check.

#include<stdio.h>

void a();

void a()
{
	int s=0,i,n,r;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s+=i;
		}
	}
	if((s/2)==n)
	{
		printf("Perfect.");
	}
	else
	{
		printf("Not perfect.");
	}
	
}
void main()
{
	a();
}