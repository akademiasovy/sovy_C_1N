#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
   int t;
   t=time(NULL);
   printf("Current time %d [s]\n",t);
   srand(time(NULL));
   
   int randomNumber1=rand()%15+1;
   printf("Random number: %d\n", randomNumber1);
   
   int randomNumber2=rand()%15+1;
   while(randomNumber1==randomNumber2 )
   {
         randomNumber2=rand()%15+1;
   }
   printf("Random number: %d\n", randomNumber2);
   
   int randomNumber3=rand()%15+1;
   while(randomNumber1==randomNumber3 || randomNumber2==randomNumber3 )
   {
         randomNumber3=rand()%15+1;
   }
   printf("Random number: %d", randomNumber3);
   
}
