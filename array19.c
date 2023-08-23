/*that creates an array from another array 'A' which is 3x3 square matix and value is 1 to 9
 sum in 3 line by horizontal elements total */

#include<Stdio.h>

void main()
{
	int i,j,a[3][3],b[3][1],s=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		s=0;
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
	b[i][0]=s;
	}
	for(i=0;i<3;i++)
	{
		j=0;
		printf("%d",b[i][j]);
		printf("\n");
	}
}