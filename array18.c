//Matrix sum

#include<Stdio.h>

void main()
{
	int i,j,a[3][3],s=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\t",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s=s+a[i][j];
		}
	}
	printf("%d\t",s);
}