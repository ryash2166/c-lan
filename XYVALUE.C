#include<stdio.h>

void main()
{
   int x,y;
   printf("\nEnter Value:");
   scanf("%d",&x);
   scanf("%d",&y);

   if((x<=2000) || (x>=3000))
   {
    printf("The Value X is.%d",x);
   }
   if((y>=100) && (y<=500))
   {
    printf("\nThe Value Y is%d",y);
   }
}