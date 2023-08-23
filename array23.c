// to reverse string and print it using another string.

#include<stdio.h>
#include<string.h>

void main()
{
	char a[50],t;
	int n,i;
	fgets(a,50,stdin);
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		t=a[i];
        a[i]=a[n-1];
		a[n-1]=t;
		n--;
	}
	puts(a);
}