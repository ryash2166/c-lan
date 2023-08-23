// dynamical allocations an array of integrs of size  and using malloc defined the array with even numbers starting from two than use calloc to double
// the size of array and fill the elemetns with contiguous even numbers starting from the last even number in the original array. final use the realloc to 
// resize to array to be original and print the contains of array.

#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  scanf("%d",&n);

  int* d=(int*)malloc(n * sizeof(int));
  if (d==NULL)
  {
    printf("Error.");
    return 1;
  }    
  for(int i=0;i<n;i++)
  {
    d[i]=i*2+2;
    //printf("%d\t",d[i]);
  }
  int* ad = (int*)calloc(2 * n, sizeof(int));
  if (ad==NULL)
  {
    printf("Error.");
    free(d);
    return 1;
  }
  for(int i=0;i<2*n;i++)
  {
    ad[i]=(i<n)?(d[i]) : 2 *(n-i)+d[n-1];
   // printf("\n%d\t",ad[i]);
  }
  int* rs = (int*)realloc(ad ,n * sizeof(int));
  if(rs==NULL)
  {
    printf("Error.");
    free(d);
    free(ad);
    return 1;
  }
  for(int i=0;i<2*n;i++)
  { 
    printf("%d\t",rs[i]);
  }
  printf("\n");
  free(d);
  free(ad);
  return 0;
}