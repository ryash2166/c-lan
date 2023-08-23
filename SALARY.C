#include<stdio.h>

void main()
{
 float bs,g,h,d;
 printf("\nEnter The Basic Salary:");
 scanf("%f",&bs);
 if(bs<=5000)
 {
  h=bs*0.08;
  d=bs*0.20;
 }
 else if(bs<=10000)
 {
  h=bs*0.12;
  d=bs*0.30;
 }
 else if(bs<=15000)
 {
  h=bs*0.15;
  d=bs*0.40;
 }
 else
 {
  h=bs*0.20;
  d=bs*0.50;
 }
  g=bs+h+d;
  printf("\nThe HRA is%f",h);
  printf("\nThe DA is%f",d);
  printf("\nThe Gross Salary is%f",g);
}