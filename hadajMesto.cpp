/*
*  Author: Roland Onofrej
*  Date: 07-11-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char answer[30];
    printf("What is the capital city of SR?");
    scanf("%s", &answer);
    int len=strlen(answer);
    for(int i=0;i<len;i++)
         answer[i]=tolower(answer[i]);
    
    if( strcmp(answer,"bratislava")==0 )
    {
         printf("Well! Correct answer.");
	}
	else {
	     printf("Oh noo!Wrong answer."); 
	}
}
