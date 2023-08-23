//reverse number using return value.

#include<stdio.h>

int rev(int n);
int rev(int n)
{
	int r=0,b;          
	
    do{
      b=n%10;
      r=r*10+b;
      n=n/10;
    }while(n!=0);
	
	return r;
}
void main()
{
	int a;
	scanf("%d",&a);
	a=rev(a);	
	printf("%d",a);
}