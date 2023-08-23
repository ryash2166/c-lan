// join the two string in one string.

#include<stdio.h>
#include<string.h>

void main()
{
	char a[50]="Skill",b[50]="Qode",c[50];
	int i=0,j=0;
	printf("%s",a);  // scanf("%s%s",&a,&b);
	printf("\t%s",b);
	while(a[i]!='\0')
	{
		c[j]=a[i];
		i++;
		j++;
	}
	i=0;
	while(b[i]!='\0')
	{
		c[j]=b[i];
		i++;
		j++;
	}
	c[j]='\0';
	printf("\n%s",c);
}