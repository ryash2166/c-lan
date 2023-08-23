#include<stdio.h>

void main()
{
 int a,b,c,d;
 printf("\nEnter marks of sub1:");
 scanf("%d",&a);
 printf("\nEnter marks of sub2:");
 scanf("%d",&b);
 printf("\nEnter marks of sub3:");
 scanf("%d",&c);

 d=(a+b+c)/3;
 printf("\nThe Total. %d\n",d);

 if(d>=33)
 {
  printf("\nYou Pass.\n");
 }
 else
 {
  printf("\nYou Fail.\n");
 }
}