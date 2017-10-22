#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define POCET 20

int main(){
  srand(time(NULL)); // premiesanie cisel
  int zreb[POCET];
  int j,i=1;
  int num;
  int zhoda;
 
  zreb[0]=rand()%80+1;
  for(i=1;i<POCET;i++){
  
    do{
	
     num=rand()%80+1;
     zhoda=0;
     for(j=0;j<i;j++){
         if(zreb[j]==num)
             zhoda++;
	 }
	 if(zhoda==0){
	    zreb[i]=num;
	 }
	}while(zhoda>0);
	
  }
  
  for(i=0;i<POCET;i++)
     printf("%d ",zreb[i]);
  
 
}
