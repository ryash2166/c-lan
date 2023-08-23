// n number of value by user and display to reverse line.
#include<stdio.h>

int main()
{
  int i;
  int n[5];
  
  for(i=0;i<=4;i++)
  {
    scanf("%d\n",&n[i]);
  }
  for(i=4;i>=0;i--)
  {
    printf("\n%d",n[i]);
  }
  return 0;
}