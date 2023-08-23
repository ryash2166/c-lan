// write 5 student 3 subject marks, total marks, percentage and grade.

#include<stdio.h>

void main()
{
	int i,g[5],m[5],s[5],t[5],p[5];
	char gr[5];
	
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Student Mark\n",i+1);
		printf("Enter Gujarati Marks: ");
		scanf("%d",&g[i]);
		printf("Enter Math Marks: ");
		scanf("%d",&m[i]);
		printf("Enter Science Marks: ");
		scanf("%d",&s[i]);
		
		t[i]=g[i]+m[i]+s[i];
		p[i]=(t[i]*100)/300;
	}
	for(i=0;i<5;i++)
	{
		if(p[i]<80)
		{
			gr[i]='A';
		}
		else if(p[i]>=80 && p[i]<=60)
		{
			gr[i]='B';
		}
	    else
		{
			gr[i]='C';
		}
	}
	printf("\tGuj\tMath\tScience\tTotal\tPer\tGrade\n");
	
	for(i=0;i<5;i++)
	{
		printf("\t%d\t%d\t%d\t%d\t%d\t%c\n",g[i],m[i],s[i],t[i],p[i],gr[i]);
	}
}