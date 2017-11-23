#include <stdio.h>
#include <ctype.h>

int main()
{
  int countLines=1;
  FILE *fr, *fw, *fyi;
  fr=fopen("data.txt","r");
  if(fr==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  fw=fopen("dataUpper.txt","w");
  if(fw==NULL){
     printf("ERROR! I cannot open the file !");
     fclose(fr);
     return 1;
  }
  fyi=fopen("dataWithoutIY.txt","w");
  if(fyi==NULL){
     printf("ERROR! I cannot open the file !");
     fclose(fr);
     fclose(fw);
     return 1;
  }
  
  char z;
  while( (z=fgetc(fr)) != EOF ){
    putchar(z);
    if(z=='\n')
       countLines++;
    fputc( toupper(z),fw); 
	
	if( toupper(z)=='I' || toupper(z)=='Y'){
	      fputc ('_',fyi);
	}
	else
	     fputc ( z ,fyi); 
	  
   }
   
   printf("\n\nCount of lines: %d", countLines);
  
  
  
  fclose(fr);
  fclose(fw);
  fclose(fyi);
  return 0;
}
