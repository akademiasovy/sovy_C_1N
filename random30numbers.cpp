#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 30

int main(){
srand(time(NULL)); // premiesanie cisel
 int arr[N];
 
 int i;
 for(i=0;i<N;i++){   // generovanie cisel
      arr[i]=rand()%100;
 }
 
 for(i=0;i<N;i++){   // vypis cisel
   printf("%d ", arr[i] );
 }
 
 int sum=0;
 for(i=0;i<N;i++){   // scitanie cisel v poli
    sum=sum+arr[i];
 }
 
 float average;
 average=(float)sum/N;		// vypocet priemeru
 printf("\nArithmetic average: %1.3f",average);
 
 int evenCount=0;
 for(i=0;i<N;i++){    // zistenie poctu parnych cisel
    if(arr[i]%2==0)
          evenCount++;
 }
 
 printf("\nEven: %d, Odd: %d", evenCount, N-evenCount);
 
 int oneDigit=0;
 for(i=0;i<N;i++){    // zistenie poctu 1-cifernych
 	if(arr[i]<10)
 	       oneDigit++;
 }
 printf("\nNumber of 1 digit numbers: %d", oneDigit);
 
 int max;
 max=arr[0];
 for(i=1;i<N;i++){
    if(max<arr[i])
        max=arr[i];
 }
 printf("\nMax number: %d",max);
 
 
 int min;
 min=arr[0];
 for(i=1;i<N;i++){
    if(min>arr[i])
        min=arr[i];
 }
 printf("\nMin number: %d",min);
 }
