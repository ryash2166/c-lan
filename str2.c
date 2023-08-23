// constuct a structur of employee details.

#include<stdio.h>
#include<string.h>
struct Employee
{
	int id;
	char n[100];
	int s;
};

void main()
{
	struct Employee e1,e2;
		e1.id=1012;
		strcpy(e1.n,"Yash_Rakholiya");
		e1.s = 30000;
		e2.id=1013;
		strcpy(e2.n,"Dhruvik_Vora");
		e2.s = 20000;
	printf("The Employee Id:- %d",e1.id);
	printf("\nThe Employee Name:- %s",e1.n);
	printf("\nThe Employee Salary:- %d",e1.s);
	printf("\n");
	printf("The Employee Id:- %d",e2.id);
	printf("\nThe Employee Name:- %s",e2.n);
	printf("\nThe Employee Salary:- %d",e2.s);
}