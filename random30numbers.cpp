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
 
 printf("\nNumbers that end 0: ");
 for(i=0;i<N;i++){
     if(arr[i]%10==0)
      printf("%d ",arr[i]);
 }

 printf("\nNumbers where last digit is bigger than previous digit: ");
 for(i=0;i<N;i++){
     if(arr[i]>=10 && arr[i]%10>arr[i]/10)
      printf("%d ",arr[i]);
 }
 
  printf("\nArray from the end: ");
 for(i=N-1;i>=0;i--){
      printf("%d ",arr[i]);
 }
 
  printf("\nEvery second item of the array: ");
 for(i=0;i<N;i=i+2){
       printf("%d ",arr[i]);
 }
 
 printf("\nChanged every 5-th item to the oposit value: ");
 for(i=0;i<N;i++){              //for(i=4;i<N;i=i+5)
     if(i%5==4){
	   arr[i]=-1*arr[i];
       printf("%d ",arr[i]);
       }
 }
 
 int brr[N];   // clone
 for(i=0;i<N;i++){
     brr[i]=arr[i];
 }
 
 int crr[N];  // the same as arr[] from the end
 for(i=0;i<N;i++){
     crr[(N-1)-i]=arr[i];
 }
 
 int drr[N];  // new array
 for(i=0;i<N;i++){
     drr[i]=rand()%100;
 }
 
 int err[N];   // new array -> arr+drr
 for(i=0;i<N;i++){
     err[i]=arr[i]+drr[i];
 }
 
 //print err array
 printf("\nErr array: ");
 for(i=0;i<N;i++){
    printf("%d ",err[i]);
    }
    
 int frr[N];   // new array containd only 0 a 1 - binary array
 for(i=0;i<N;i++){
      frr[i]=rand()%2;
 }
    
}
