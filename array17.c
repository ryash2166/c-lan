//substraction of two array.

#include<stdio.h>

void main()
{
	int i,j,a[2][2],b[2][2],c[2][2];
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		scanf("%d\t%d\t",&a[i][j],&b[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
	}
}