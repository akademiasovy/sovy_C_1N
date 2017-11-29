#include <stdio.h>
#include <string.h>

typedef  struct {
	char currency[4];
	float exchange;
}rate;

int main()
{
     rate rates[30];
	 FILE *f=fopen("rates.txt","r");
	 if(f==NULL){
	 	printf("Error. I cannot read rates from the file!");
	 	return 1;
	 } 
	 
	 int n=0;
	 int found=0;
	 while( fscanf(f,"%s%f", &rates[n].currency, &rates[n].exchange)!=EOF){
	 	n++;
	 }
	 fclose(f);
	 
	 float value;
	 char code[4];
	 printf("\nEnter amount [EUR] :");
	 scanf("%f", &value);
	 printf("\nEnter currency :");
	 scanf("%s", &code);
	 int i;
	 for(i=0;i<n;i++){
	 	if(strcmp(code,rates[i].currency)==0){
	 		printf("\nExchange rate: %1.2f, amount: %1.2f", rates[i].exchange, rates[i].exchange*value);
		    found=1;
		 }
	 }
	 if(found==0){
	 	printf("\nIncorect currency!");
	 }
	
}
