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
   
   for(i=0;i<N;i++)
       p[i]=rand()%50;
       
   for(i=0;i<N;i++)
       printf("%d  ",p[i]);
   
   for(i=0;i<N-1;i++){
      for(j=i+1;j<N;j++){
          if( p[i]>p[j]){
             // change
             temp=p[i];
             p[i]=p[j];
             p[j]=temp;
		  }
	  }
   }  
   
   putchar('\n');
   for(i=0;i<N;i++)
       printf("%d  ",p[i]);  
   
}
   








