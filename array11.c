// given array odd - even postion elements sum.

#include<stdio.h>

void main ()
{
  int n[10];
  int i,o=0,e=0;
  for(i=0;i<10;i++)
  {
    printf("Enter %dth Value",i);
	scanf("%d",&n[i]);
  }
  for(i=0;i<10;i++)
  {
    if(i%2==1)
	{
	e=e+n[i];
	
	}
	else
	{
	 o=o+n[i];
	 
	}
  }
  printf("Even %d\n",e);
  printf("Odd %d\n",o);
}