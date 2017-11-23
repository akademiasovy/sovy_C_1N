#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#define N 16

int main()
{
  FILE *fr;
  srand(time(NULL));
  int random = rand()%N+1;
  
  fr=fopen("wordlist.txt","r");
  if(fr==NULL){
    printf("\nError. File issue!");
    return 1;
  }
  char word[20];
  
   int i;
   for(i=0;i<random;i++){
        fscanf(fr, "%s", &word);
   }
   printf("Random word(%d): %s",i, word);
  
  
  
  fclose(fr);
  return 0;
}
