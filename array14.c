// count total number of duplicate elements in array.

#include<stdio.h>

void main ()
{
	int i[5], a,b=0,c;
	for(a=0;a<5;a++)
	{
	scanf ("%d",&i[a]);
	}
	for(a=0;a<5;a++)
	{
		for(c=a+1;c<5;c++)
		{
			if(i[a]==i[c])
			{
			b++;
			break;
			}
		}
	}
	printf("\n%d",b);	
}