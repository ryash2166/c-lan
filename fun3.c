//whether a number is perfect or not check.

#include<stdio.h>      

int a(int n, int d)
{
	if(n%d==0)
	{
		return 1;          
	}
	else 
	{
		return 0;
	}
}
int b(int n)
{
	int i=1,s=0;
	while(i<n)
	{
		if(a(n,i))
		{
			s+=i;
		}
		i++;
	}
	return s;
}
int p(int n)
{
	if(b(n)==n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int n;
	scanf("%d",&n);
	if(p(n))
	{
		printf("Perfect Number.");
	}
	else
	{
		printf("Not Perfect Number.");
	}
}