#include <stdio.h>

int main(){
  int sum, payment, rest;
  printf("Enter sum: ");
  scanf("%d", &sum);
  printf("Enter payment: ");
  scanf("%d",&payment);
  rest=payment-sum;
  printf("\nTo refund: %d\n",rest);
  if(rest==0){
      printf("No rest!");
  }
  else{
    if(rest<0){
       printf("Not enought money!");
	}
	else{
		  	  int b500=rest/500;
			  rest=rest-b500*500;      // rest%=500; 
			  printf("\n500Eur : %d",b500);    
			  
			  int b100=rest/100;
			  rest=rest-b100*100;      // rest%=100; 
			  printf("\n100Eur : %d",b100);  
			  
			  int b20=rest/20;
			  rest=rest-b20*20;      // rest%=20; 
			  printf("\n20Eur : %d",b20); 
			  
			  int b10=rest/10;
			  rest=rest-b10*10;      // rest%=10; 
			  printf("\n10Eur : %d",b10); 
			  
			  int b5=rest/5;
			  rest=rest-b5*5;      // rest%=5; 
			  printf("\n5Eur : %d",b5); 
			  
			  int b2=rest/2;
			  rest=rest-b2*2;      // rest%=2; 
			  printf("\n2Eur : %d",b2);
			  
			  printf("\n1Eur : %d",rest);
		}
	}
}
