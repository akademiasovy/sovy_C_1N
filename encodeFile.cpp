#include <stdio.h>
#include <ctype.h>

typedef struct table {
	char origin[2];
	char code[2];
} table;

int main()
{
  
  FILE *fr;
  int i,n=0;
  table codeTable[36];
  fr=fopen("codeTable.txt","r");
  if(fr==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  
  // nacitanie tabulky  
  while(fscanf(fr,"%s%s", &codeTable[n].origin, &codeTable[n].code)!=EOF){
  	n++;
  	
  }
  fclose(fr);
  
  // praca so suborom -: citanie a zmena pismen
  fr=fopen("data.txt","r");
  char c;
  while((c=fgetc(fr))!=EOF){

    // kodovanie velkych pismen
  	if(isupper(c)){
  	    for(i=0;i<n;i++){ // prehladavanie kodovacej tabulky
  	    	if(codeTable[i].origin[0]==c){
			    c=codeTable[i].code[0];
			    break; // ak najdeme spravny kod pismena, dalej nehladame, cyklus konci
  	    	}
		  }  	 
	}
	if(islower(c)){
  	    for(i=0;i<n;i++){
  	    	if(codeTable[i].origin[0]==toupper(c)){
  	    	    c=tolower(codeTable[i].code[0]);
  	            break;
			}
		  }  	 
	}
	putchar(c); // vypis na oberazovku
	
	
	
  }
  fclose(fr);

  return 0;
}
