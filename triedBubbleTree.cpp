/*
*  Author: Roland Onofrej
*  Date: 09-11-2017
*  Description: tic tac toe
*  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

int main()
{
   int p[N];
   int i,j, temp;
   srand(time(NULL));
   
   for(i=0;i<N;i++) // generovanie
       p[i]=rand()%50;
       
   for(i=0;i<N;i++)  // vypis
       printf("%d  ",p[i]);
   
   for(i=0;i<N-1;i++){  // triedenie
      for(j=0;j<N-1-i;j++){
          if( p[j]>p[j+1]){
             // change
             temp=p[j];
             p[j]=p[j+1];
             p[j+1]=temp;
		  }
	  }
   }  
   
   putchar('\n');        // vypis
   for(i=0;i<N;i++)
       printf("%d  ",p[i]);  
   
}
   








