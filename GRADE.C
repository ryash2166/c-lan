#include<stdio.h>

void main()
{
 int n;
 printf("\nEnter Mark:");
 scanf("%d",&n);
 if(n>=75)
 {
  printf("You Got A Grade.");
 }
 else if(n>=60)
 {
  printf("You Got B Grade.");
 }
 else if(n>=45)
 {
  printf("You Got C Grade.");
 }
 else if(n>=35)
 {
  printf("You Got D Grade.");
 }
 else
 {
  printf("You Fail.");
 }
}