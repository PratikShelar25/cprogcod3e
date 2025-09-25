
#include<stdio.h>

	struct Employee
	{
		int empid;
		int salary;
		int age;
		int comm;
	};
	

	typedef struct Employee Emp;
        
	void printEmp(Emp);
	void printEmp(Emp e)
	{
	printf("Emp details : %d%d%d%d\n",e.empid,e.salary,e.age,e.comm);
	}
	int main(){
		int ch;
		Emp e1,e2;
		ch=getchar();
		printf("Enter emp details:\n");
		scanf("%d%d%d%d",e1.empid,e1.salary,e1.age,e1.comm);

		printf("Enter emp details:\n");
		scanf("%d%d%d%d",e2.empid,e2.salary,e2.age,e2.comm);
		
     Emp e3 = {103,2145.52,21,4935.45};


	printEmp(e1);
	printEmp(e2);
	printEmp(e3);

	return 0;

	}
