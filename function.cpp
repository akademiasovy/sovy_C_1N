#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void add(int a,int b);  // deklaracia funkcie
int multiple(int a,int b);
float calculateBMI(float weight, float height);

void sayHello(){
   printf("\n-------");
   printf("\n-HELLO-");
   printf("\n-------");

}

void printRandomNumber(){
   int x=rand()%100;
   printf("\nRandom number between 0 a 99: %d",x);
}

int main(){
   srand(time(NULL));
   sayHello(); sayHello();
   printRandomNumber();
   printRandomNumber();
   printRandomNumber();
   add(15,88);
   add(45,89);
   add(569,7584);
   int res;
   res=multiple(49,37);
   printf("\n\t49 * 37 = %d",res);
   float bmi=calculateBMI(98,1.83);
   printf("\nYour BMI index is: %1.2f",bmi);
}

void add(int a,int b){
    int sum = a+b;
    printf("\n\t%d + %d = %d",a,b,sum);
}

int multiple(int a,int b){
   int result = a*b;
   return result;
}

float calculateBMI(float weight, float height){
    return weight/(height*height);
}


