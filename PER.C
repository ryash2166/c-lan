#include <stdio.h>

void main()
{
 int a,b,c,p;
 printf("Subject1 Mark:");
 scanf("%d",&a);
 printf("\nSubject2 Mark:");
 scanf("%d",&b);
 printf("\nSubject3 Mark:");
 scanf("%d",&c);

 p=(a+b+c)/3;
 printf("\nThe Persentage is%d\n",p);
}