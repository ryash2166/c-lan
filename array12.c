// given array odd  even number sum.

#include<stdio.h>

void main ()
{
  int n[10];
  int i,o,e;
  for(i=0;i<10;i++)
  {
    printf("Enter %dth Value",i);
	scanf("%d",&n[i]);
  }
  for(i=0;i<10;i++)
  {
    if(i%2==1)
	{
	e=n[i]+n[i];
	
	}
	else
	{
	 o=n[i]+n[i];
	 
	}
  }
  printf("Even %d\n",e);
  printf("Odd %d\n",o);
}