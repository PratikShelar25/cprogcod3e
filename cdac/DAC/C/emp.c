 #include<stdio.h>


struct Employee{
		int id;
		char name[30];
		float salary;
		};

		int main(){
		int n;

		printf("Enter number for employee:");
		scanf("%d",&n);
		
		struct Employee emp[n];


		for (int i =0; i<=n; i++){
		printf("Enter details of Employee:\n");
		
		printf("Enter ID:\n");
		scanf("%d", &emp[i].id);

		printf("Enter Name:\n");
		scanf("%s", &emp[i].name);

		printf("Enter salary:\n");
		scanf("%f",&emp[i].salary);
		}

		printf("-----Employee Details -------\n");
		for(int i=0; i<n; i++){
			printf("Employee %d\n",i+1);
			printf("ID     :%d\n",emp[i].id);
			printf("NAME   :%d\n",emp[i].name);
			printf("SALARY :%d\n",emp[i].salary);
		}

		return 0;
		}
