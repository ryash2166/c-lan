//2-D Array

#include<stdio.h>

void main()
{
	int class[2][4]={{23,34,45,10},{10,12,23,54}},i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
		  printf("%d\t",class[i][j]);
          if(j==3)
          {
			  printf("\n");
		  }			  
		}
	}
}
