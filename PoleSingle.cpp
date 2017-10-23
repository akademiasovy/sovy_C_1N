#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define POCET 15

int main(){
  srand(time(NULL)); // premiesanie cisel
  int origin[POCET];
  int copy[POCET];
  int i,j,n=0;
  int found;
  
  for(i=0;i<POCET;i++)
      origin[i]=rand()%30+1;
  
  for(i=0;i<POCET;i++){
      int x=origin[i];
      found=0;
	    
      for(j=0;j<n;j++){
	           if(x==copy[j])
	               found=1;
	  }
	  if(found==0){
		       copy[n]=x;
		       n++;
	  }
	  
      
  }  
  
  printf("\nPrint origin array: ");
  for(i=0;i<POCET;i++)
      printf("%d  ",origin[i]);  

  printf("\nPrint copy array: ");
  for(i=0;i<n;i++)
      printf("%d  ",copy[i]);
 
}
