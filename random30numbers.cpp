#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

int main(){
srand(time(NULL)); // premiesanie cisel
 int arr[N];
 
 int i;
 for(i=0;i<N;i++){
      arr[i]=rand()%100;
 }
 
 for(i=0;i<N;i++){
   printf("%d ", arr[i] );
 }
 
 
 
 }
