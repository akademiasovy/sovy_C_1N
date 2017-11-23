#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main(){
 int *p = (int *) malloc (N*sizeof(int));
 srand(time(NULL));
 *p=rand()%80+1;
 
 int *pg, *px;
 pg=p+1;
 px=p;
 
 int index=1;
 bool repeat;
 while(index<N){
     *pg=rand()%80+1;
     repeat=false;
     px=p;
     while(px<pg){
        if(*px==*pg)
           repeat=true;
        px++;   
	 }
	 if(!repeat){
	    index++;
	    pg++;
     }
    
	} 
     px=p;
     for(index=0;index<N;index++){
         printf("%d ", *px);
         px++;
	 }
 
}
