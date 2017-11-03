/*
*  Author: Roland Onofrej
*  Date: 02-11-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char text[11]; // max is 10 characters + \0
    char textUpper[11];
    char textSmall[11];
    printf("Enter text: ");
    scanf("%s",&text);
    printf("\nYour text: %s",text);
    int i, count=0;
    int length = strlen(text);
    printf("\nNumber of characters: %d", length);
    
	for(i=0;i<length;i++){
        if(text[i]>='A' && text[i]<='Z'){
             count++;
        }
	}
	printf("\nNumber of capital letters: %d", count);
    
    count=0;
	for(i=0;i<length;i++){
        if(text[i]>='a' && text[i]<='z'){
             count++;
        }
	}
	printf("\nNumber of small letters: %d", count);
	
	count=0;
	for(i=0;i<length;i++){
        if(text[i]>='0' && text[i]<='9'){
             count++;
        }
	}
	printf("\nNumber of digits: %d", count);
	
	count=0;
	for(i=0;i<length;i++){
		char z=text[i];
		if(z>='a' && z<='z')
		     z=z-32; // zmena maleho pismena na velke
        if(z=='A' || z=='E' || z=='I' || z=='O'|| z=='U' || z=='Y'){
             count++;
        }
	}
	printf("\nNumber of vowels: %d", count);
	
	printf("\nThe word from the end: ");
	for(i=length-1;i>=0;i--)
	    printf("%c", text[i]);

    // convert small letters to upper
	for(i=0; i<=length; i++){	// je tam = lebo chceme presunut aj znak \0
	   char z=text[i];
	   if(z>='a' && z<='z')
		     z=z-32; // zmena maleho pismena na velke
	   textUpper[i]=z;  	     
	}
	printf("\nUpper text: %s", textUpper); 
	
	// convert upper letters to small
	for(i=0; i<=length; i++){	// je tam = lebo chceme presunut aj znak \0
	   char z=text[i];
	   if(z>='A' && z<='Z')
		     z=z+32; // zmena maleho pismena na velke
	   textSmall[i]=z;  	     
	}
	printf("\nSmall text: %s", textSmall); 
}








