//write a function that reverse a number.

#include<stdio.h>

void rev(int n);
void rev(int n)
{
	int r=0,b;          
	//scanf("%d",&n);
    do{
      b=n%10;
      r=r*10+b;
      n=n/10;
    }while(n!=0);
	printf("%d",r);
}
void main()
{
	int a;
	scanf("%d",&a);
	rev(a);	
}
