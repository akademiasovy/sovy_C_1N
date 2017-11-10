#include<stdio.h>
#include<ctype.h>
#include<string.h>

void checkName( char name[]){
   int len=strlen(name);
   int i;
   name[0]=toupper(name[0]);
   
   for(i=1;i<len;i++)
       name[i]=tolower(name[i]);
}

int isValidIdCard(char text[]) // 0 - not valid, 1 - valid
{
   int len=strlen(text);
   int i;
   if(len!=8)
         return 0;
   if(!isalpha(text[0]) || !isalpha(text[1]) )
         return 0; 
   for(i=2;i<7;i++){
        if(!isdigit(text[i]))
            return 0;
   }
   
   return 1;		      
}


int main()
{
   char name[30];
   printf("Enter your name: ");
   scanf("%s",&name);
   checkName(name);
   printf("Your name is: %s", name);
}
