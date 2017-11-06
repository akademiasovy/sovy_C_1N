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
    char fname[15];
    char lname[15];
    int i;
    int length;
    int lengthFirstName;
    int invalidChar=0;
    printf("Enter your first name: ");
    scanf("%s", &fname);
    printf("Enter your last name: ");
    scanf("%s", &lname);
    length=strlen(lname);
    lengthFirstName=strlen(fname);
    
    for(i=0;i<lengthFirstName; i++){
        if(isalpha(fname[i])==0)
        {
            invalidChar++;
		}
	}
	for(i=0;i<length; i++){
        if(isalpha(lname[i])==0)
        {
            invalidChar++;
		}
	}
    
    printf("\n");
    
    if(invalidChar==0){
        	// Vypis M. Priezvisko
		    printf("%c. ",   toupper(fname[0]) );
		    printf("%c",   toupper(lname[0]) );
		    for(i=1; i<length;i++){
		       printf("%c",   tolower(lname[i]) );
			}
			//vypis emailu
			putchar('\n');
			
			for(i=0;i<lengthFirstName; i++)
			    putchar( tolower(fname[i]) );
			
			putchar('.');
			
			for(i=0;i<length; i++)
			    putchar( tolower(lname[i]) );  
			    
			printf("@akademiasovy.sk")  ;
	}
	else {
	   printf("Invalid first name or last name (invalid characters: %d)",invalidChar);
	}
}
