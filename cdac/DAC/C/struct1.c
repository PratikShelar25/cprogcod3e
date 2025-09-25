
#include<stdio.h>

	struct Employee
	{
		int empid;
		float salary;
		int age;
		float comm;
	};
	
	typedef struct Employee Emp;
	
	double printgrosssal(Emp);
	double printgrosssal(Emp e)
	{
		double grosssal;
		grosssal = (e.salary+e.comm)*12;
		
		return grosssal;
	}
        
	void printEmp(Emp);
	void printEmp(Emp e)
	{
		printf("\n id: %d | salary: %f | age: %d | commision: %f ",e.empid,e.salary,e.age,e.comm);
		printf("\n annual salary : %f\n",printgrosssal(e));
	}
	int main(){
	
		Emp e1,e2;
		
		printf("Enter emp details: id, salary,age, comm\n");
		scanf("%d %f %d %f",&e1.empid,&e1.salary,&e1.age,&e1.comm);

		printf("\nEnter emp details:\n");
		
		scanf("%d %f %d %f",&e2.empid,&e2.salary,&e2.age,&e2.comm);
     Emp e3 = {103,2145.52,21,4935.45};


	printEmp(e1);
	printEmp(e2);
	printEmp(e3);

	return 0;

	}

