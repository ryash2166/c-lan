//array number is maximum and minimum.

#include<stdio.h>

void max();
void max()
{
	int a[100];
	int max,min,i;
	int n=sizeof(a);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
    for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("The Maximum Element is %d.",max);
	printf("\nThe Minimum Element is %d.",min);
}

void main()
{
	max();
}