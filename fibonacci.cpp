#include <stdio.h>
#define N 30

int main(){
 int f[N];
 f[0]=f[1]=1;
 int i;
 
  for(i=2;i<N;i++){
      f[i]=f[i-1]+f[i-2];
  }
  
  printf("Fibonacci sequence: \n");
  for(i=0;i<N;i++){
     printf("%d  ",f[i]);
  }
}
