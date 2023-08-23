#include<stdio.h>

void main()
{
 int s,t;
 printf("\nEnter The Slab:");
 scanf("%d",&t);
 if(t<2500)
 {
  s=0;
 }
 else if(t<=5000)
 {
   s=t*0.10;
 }
 else if(t<=10000)
 {
  s=t*0.20;
 }
 else
 {
  s=t*0.30;
 }
  printf("\nThe Tax is:%d",s);
}
