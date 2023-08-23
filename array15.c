// to count frequancy of each elements of an array.

#include<stdio.h>

void main ()
{
	int i[6], a,b,c,j[100]={1,1,1,1,1.1};
	for(a=0;a<6;a++)
	{
	scanf ("%d",&i[a]);
	}
	for(a=0;a<6;a++)
	{
		b=1;
		for(c=a+1;c<6;c++)
		{
			if(i[a]==i[c])
			{
			b++;
			j[c]=0;
			}
		}
		if(j[a]!=0)
		{
			j[a]=b;
			printf("\n%d\t%d",i[a],j[a]);
		}
	}
		
}