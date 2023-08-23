// copy the elements of 1 array into another array.

#include<stdio.h>

void main()
{
  int i[5]={10,12,15,45,32},j[5],a;
  
  for(a=0;a<5;a++)
  {
	  j[a]=i[a];
	  printf("%d\n",j[a]);
  }	  
}