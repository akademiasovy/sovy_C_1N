/*
*  Author: Roland Onofrej
*  Date: 02-11-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[11]; // max is 10 characters + \0
    char textUpper[11];
    char textSmall[11];
    char textChanged[11];
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
	
	printf("\nText without digits: ");
	for(i=0;i<length;i++){
	   char z=text[i];
	   if(z>='0' && z<='9')
	       printf("?");
	   else
	       putchar(z);   // alias : printf("%c", z);    
	}
	
	printf("\nCeasar 1 : ");
	for(i=0;i<length;i++){
	     char z=text[i];
	     if(z>='A' && z<='Z'){
	         z=z+1;
	         if(z>'Z'){ 
	              z=z-26;
	         }
	      }   
	    
		 if(z>='a' && z<='z'){
	         z=z+1;
	         if(z>'z'){
	            z=z-26;
	         }
	    }	          
	     putchar(z);    
	}
	
	// vypise velke pismena miesto malych, male pismena miesto velkych
	// a medzery miesti cislic
	printf("\nSpecial text: ");
	for(i=0;i<length;i++){
	    char z=text[i];
	    //if(z>='a' && z<='z')
	    if(islower(z)>0){
	        //z=z-32;
	        z=toupper(z);
		}
		else if(isupper(z)>0){
	        //z=z-32;
	        z=tolower(z);
		}
		
		putchar(z);
	    
	}
	
	// vymena dvojic pismen
	printf("\nChanged letters: ");
	for(i=0;i<length-1;i=i+2){
	     textChanged[i]=text[i+1];
	     textChanged[i+1]=text[i];
	}
	textChanged[length]='\0';
	if(length%2==1){
	     textChanged[length-1]=text[length-1];
	}
	printf("%s", textChanged);	
	
}








