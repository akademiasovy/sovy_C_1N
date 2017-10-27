#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int calcRectangleArea(int a, int b);

int main(){
int result=calcRectangleArea(45,87);
   printf("Test rectangle: %d", result );
}

int calcRectangleArea(int a, int b){
    return a*b;
}


