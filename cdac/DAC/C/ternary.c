#include<stdio.h>
int main(){
	int age;
	printf("enter age");
	scanf("%d",&age);
	printf("%s \n", (age>=18) ? "adult" : "minor");
}
