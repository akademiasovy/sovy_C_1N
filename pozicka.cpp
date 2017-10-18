/*
*  Author: Roland Onofrej
*  Date: 10-10-2017
*  Description: 
*  
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float sum, urok, splatka;
    int mesiac, rok;
    
    printf("Enter sum: ");
    scanf("%f", &sum);
    printf("Enter interest: ");
    scanf("%f", &urok);
    printf("Enter months: ");
    scanf("%d", &mesiac);
	
	rok = ceil(mesiac/12.0); 
	
	splatka= ( sum * pow(1+urok/100.0, rok) ) / mesiac;  
	printf("\n Monthly payment: %1.2f", splatka);
	printf("\n Over payment: %1.2f", splatka*mesiac-sum);
}








