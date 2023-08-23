//whether a number is perfect or not check.

#include<stdio.h>

int a();

int a(int n)
{
	int s=0,i,r;
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
		return 1;
	}
	else
	{
		return 0;
	}
	return s;
}
int main()
{
	int n;
	//scanf("%d",&n);
	if(a(n))
	{
		printf("Perfect Number.");
	}
	else
	{
		printf("Not Perfect Number.");
	}
	return 0;
}