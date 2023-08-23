#include<stdio.h>

void main()
{
  int a;
  printf("Enter Age:\n");
  scanf("%d",&a);
  if(a>=18)
  {
    printf("\nIt is Eligable.\n");
  }
  else
  {
    printf("\nIt is not Eligable.\n");
  }
  scanf("%d",&a);
}