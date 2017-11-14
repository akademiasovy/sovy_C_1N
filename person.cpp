#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
   char city[20];
   int pc;
}address_detail;

typedef struct{
   char name[20];
   int age;
   float salary;
   address_detail address;
} person;

int main()
{
   srand(time(NULL));
   person emp1, emp2;
   strcpy(emp1.name,"Viktor");
   emp1.age=32;
   emp1.salary=1508.13;
   strcpy(emp2.name,"DOminika");
   emp2.age=30;
   emp2.salary=1499.99;
   
   printf("Name: %s, age: %d, salary: %1.2f",emp1.name, emp1.age, emp1.salary);
   
   // pole zamestnancov
   person employees[20];
   printf("\nEnter name: ");
   scanf("%s", &employees[0].name);
   printf("\nEnter age: ");
   scanf("%d", &employees[0].age);
   printf("\nEnter salary: ");
   scanf("%f", &employees[0].salary);  
   
   int i,j;
   for(i=1;i<20;i++){
      for(j=0;j<6;j++)
           employees[i].name[j]=rand()%26+'A';
      employees[i].name[6]='\0';   
	  
	  employees[i].age=rand()%33+18;
	  employees[i].salary=rand()%1000+500;  
	  int pc=rand()%90000+10000;
	  employees[i].address.pc=pc;
	  switch(pc%3){
	     case 0: strcpy(employees[i].address.city, "Kosice"); break;
	     case 1: strcpy(employees[i].address.city, "Poprad"); break;
	     case 2: strcpy(employees[i].address.city, "Michalovce"); break;
	     default: strcpy(employees[i].address.city, "Horna dolna");
	  }
   }
   
   for(i=0;i<20;i++){
      printf("\nName: %s, age: %d, salary: %1.2f",employees[i].name, employees[i].age, employees[i].salary);
      printf("\n\t City & postal code: %s %d",employees[i].address.city, employees[i].address.pc);
   }
   
}
