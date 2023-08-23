// a program to store elements in an array and printf them take values from use size of array is 17.

#include<stdio.h>

int main()
{
  int i;
  int n[17];
  
  
  for(i=0;i<=16;i++)
  {
    scanf("%d\n",&n[i]);
  }
  for(i=0;i<=16;i++)
  {
	//n[17]= i;
    printf("\n%d",n[i]);
  }
  return 0;
}