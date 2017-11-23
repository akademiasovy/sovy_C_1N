#include<stdio.h>

int main(){
   int a=50;
   int b;
   printf("a: %d %d", a, &a);
   printf("\nb: %d %d", b, &b);

   int *p;
   p=&a;
   printf("\np: %d %d", p, *p);
   
   
}
