/*
*  Author: Roland Onofrej
*  Date: 06-11-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char text[500];
    strcpy(text,"SQL is a standard language for storing, manipulating and retrieving "); 
	strcat(text,"data in databases. Our SQL tutorial will teach you how to use SQL in: MySQL, ");
	strcat(text,"SQL Server, MS Access, Oracle, Sybase, Informix, Postgres systems.");
	
	int count[26];
	int i;
	char z;
	for(i=0;i<26;i++)
	     count[i]=0;
	
	int len=strlen(text);  // pocet pismen v texte
	for(i=0;i<len; i++){
	    z=text[i];
	    z=toupper(z); // ake je tam male pismeno zmen na velke
	    if(isalpha(z)){  // test ci v premennej z je pismeno
	        count[z-'A']++;
		}
	}
	
	for(i=0;i<26;i++){
	   printf("\n %c : %d", i+'A', count[i] );
	}
	     
	     
    
}
