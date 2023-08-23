// print the sum of element of an array of size n.

#include<stdio.h>

void main()
{
  int a[100], s=0,i,n;
  scanf("%d\n",&n);
  for(i=0;i<n;i++)
  {
	printf("\ninput %d\n",i);
    scanf("\n%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    s=s+a[i];
  }
  printf("\nThe Sum is %d\n",s);
}