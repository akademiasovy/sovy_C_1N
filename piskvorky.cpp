/*
*  Author: Roland Onofrej
*  Date: 09-11-2017
*  Description: tic tac toe
*  
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   srand(time(NULL));
   int field[3][3];
   int i,j;
   for(i=0;i<3;i++)  // generovanie pola
      for(j=0;j<3;j++)
          field[i][j]=rand()%2;

   for(i=0;i<3;i++){  // vypis pola - hracieho planu
      for(j=0;j<3;j++)   
	      printf("%d  ", field[i][j]);   
      printf("\n");
      }
      
    int count0=0;
	int count1=0;
	
	for(i=0;i<3;i++){
	   if(field[i][0]==field[i][1] && field[i][1]==field[i][2]){
	       if(field[i][0]==0)
	           count0++;
	       else
	           count1++;
	   }
	}  
	
	for(j=0;j<3;j++){
	   if(field[0][j]==field[1][j] && field[1][j]==field[2][j]){
	       if(field[0][j]==0)
	           count0++;
	       else
	           count1++;
	   }
	}
	
	
	   if(field[0][0]==field[1][1] && field[1][1]==field[2][2]){
	       if(field[0][0]==0)
	           count0++;
	       else
	           count1++;
	   }
	
	   if(field[2][0]==field[1][1] && field[1][1]==field[0][2]){
	       if(field[2][0]==0)
	           count0++;
	       else
	           count1++;
	   }
	   printf("\nPlayer1: %d", count0);
	   printf("\nPlayer2: %d", count1);
	   
	   if(count0>count1)
	       printf("\nPlayer1 is winner!");
	   else if(count0<count1)
	       printf("\nPlayer2 is winner!");  
	   else  
	       printf("\nDraw !");
}
   








