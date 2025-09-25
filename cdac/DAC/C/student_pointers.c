#include <stdio.h>
#include <string.h>

struct student{
	int roll_no;
	char name[10];
	char branch[40];
	int batch;

};

typedef struct student std;


void insertData(std*);
void insertData(std* s){

printf("Enter rollno name branch batch\n");
scanf("%d %s %s %d", &s->roll_no , &s->name, &s->branch, &s->batch);

}

void printData(std*);
void printData(std* s){
printf("Rollno: %d\n" , s->roll_no);
printf("Name: %s\n", s->name);
printf("Branch: %s\n", s->branch);
printf("Batch: %d\n", s->batch);

}

int main(){
  std s[3];
  for(int i =0;i<3;i++){
  
	  insertData(&s[i]);
  
  }
  for(int i =0;i<3 ;i++){
     printData(&s[i]);
  }

    return 0;
}
