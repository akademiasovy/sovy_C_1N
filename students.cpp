#include <stdio.h>

typedef struct{
  char fname[20];
  char lname[20];
  int mark1;
  int mark2;
  int mark3;
  float absence;   
} students;

int main()
{
  FILE *f=fopen("students.txt","r");
  int num;
  fscanf(f,"%d", &num);
  int i;
  students arr[30];
  for(i=0;i<num;i++){
     fscanf(f,"%s", &arr[i].fname);
     fscanf(f,"%s", &arr[i].lname);
     fscanf(f,"%d", &arr[i].mark1);
     fscanf(f,"%d", &arr[i].mark2);
     fscanf(f,"%d", &arr[i].mark3);
     fscanf(f,"%f", &arr[i].fname);
  }
    
   fclose(f); 
    
}
