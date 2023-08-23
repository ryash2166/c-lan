// to print the sum of dygonal elements of square matrix of size 3x3.

#include<stdio.h>

void main()
{
	int i,j,a[3][3],s=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				s=s+a[i][j];
			}
		}
	}
	printf("%d",s);
}