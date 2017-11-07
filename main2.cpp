#include <stdio.h>
#define SIZE 2
#define COLOR 3
#define SUBJECT 3
#define ROWS 4

typedef enum type{NEG, POS};
typedef enum size{MALA, VELKA};
typedef enum color{BIELA,CERVENA,MODRA};
typedef enum subject{TEHLA,KOCKA,LOPTA};

int main()
{
int matrix[4][4]={{NEG,MALA,CERVENA,TEHLA},{NEG,VELKA,BIELA,LOPTA},{NEG,VELKA,MODRA,KOCKA},{POS,MALA,MODRA,LOPTA}};
	int r1=1;  // pocet riadkov v result-e
	int result[50][3]={{-1,-1,-1}};
	int r2=0;
	int result2[50][3];
	
	int i,j,k,m;
	
	i=0;
		printf("\n\n> Proces: %d - %d %d %d",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3]);
		
		if(matrix[i][0]==0){//NEGATIVE
			for(j=0;j<r1;j++){
				if(result[j][0]==-1){
					for(k=0;k<SIZE;k++){
						if(matrix[i][1]!=k){
							result2[r2][0]=k;
							result2[r2][1]=result[j][1];
							result2[r2][2]=result[j][2];
							r2++;

						}
					}
				}
				if(result[j][1]==-1){
					for(k=0;k<COLOR;k++){
						if(matrix[i][2]!=k){
							result2[r2][0]=result[j][0];
							result2[r2][1]=k;
							result2[r2][2]=result[j][2];
							r2++;
													
						}
					}
				}
				if(result[j][2]==-1){
					for(k=0;k<SUBJECT;k++){
						if(matrix[i][3]!=k){
							result2[r2][0]=result[j][0];
							result2[r2][1]=result[j][1];
							result2[r2][2]=k;
							r2++;
						}
					}
				}
				
	       }
	   }else{
	   	
	   }
		
			for(k=0;k<r2;k++){
			    
				result[k][0]=result2[k][0];
				result[k][1]=result2[k][1];
				result[k][2]=result2[k][2];
				r1=r2;
				
			}
			
		for(j=0;j<r1;j++){
	
		  //    printf("\n %d %d %d", result[j][0],result[j][1],result[j][2]);
		  printf("\n");
		  switch(result[j][0]){
		  	case 0: printf("MALA  "); break;
		  	case 1: printf("VELKA "); break;
		  	case -1: printf("   X  "); break;
		  }
		  	  switch(result[j][1]){
		  	case 0: printf("BIELA   "); break;
		  	case 1: printf("CERVENA "); break;
		  	case 2: printf("MODRA   "); break;
		  	case -1: printf("  Y     "); break;
		  }
		  	  switch(result[j][2]){
		  	case 0: printf("TEHLA "); break;
		  	case 1: printf("KOCKA "); break;
		  	case 2: printf("LOPTA "); break;
		  	case -1: printf("  Z   "); break;
		  }
		  
	    }
	    
	    
	    	    
		  for(i=1;i<3;i++){
		  		printf("\n\n> Proces: %d - %d %d %d",matrix[i][0],matrix[i][1],matrix[i][2],matrix[i][3]);

		  	r2=0;
		  	if(matrix[i][0]==0){// neg
		  	  for(j=0;j<r1;j++)	{
				
		  	    if(matrix[i][1]!=result[j][0] && matrix[i][2]!=result[j][1] && matrix[i][3]!=result[j][2]){ //ziadna zhoda
		  	    		    result2[r2][0]=result[j][0];
							result2[r2][1]=result[j][1];
							result2[r2][2]=result[j][2];
							r2++;
		  	    }else if(matrix[i][1]==result[j][0]){// zhoda v 1 stlpci
		  	           if(matrix[i][2]==result[j][1]){  // zhoda v 2 stlpci
		  	           	       if(matrix[i][3]!=result[j][2] && result[j][2]!=-1 ){ // nie je zhoda v 3 stlci a nie je tam Z
								  	           	  	result2[r2][0]=result[j][0];
													result2[r2][1]=result[j][1];
													result2[r2][2]=result[j][2];
													r2++;
									}
									else if(matrix[i][3]!=result[j][2] && result[j][2]==-1 ){ // nie je zhoda v 3 stlci a ale je tam Z
									       for(k=0;k<SUBJECT;k++){
									       	  if(matrix[i][3]!=k){
									       	  	    result2[r2][0]=result[j][0];
													result2[r2][1]=result[j][1];
													result2[r2][2]=k;
													r2++;
												 }
										   }
									}
						 }
						 else { // nie je zhoda v 2 stlpci
						            
 						 	 if( result[j][1]!=-1 ){  // nie je Y
 						 	  	                    result2[r2][0]=result[j][0];
													result2[r2][1]=result[j][1];
													result2[r2][2]=result[j][2];
													r2++;
 					    	 }
 					    	 else{  // v druhom stlpci je Y
 					    	   if(result[j][2]!=matrix[i][3] && result[j][2]!=-1){ //v tretom nie je Z ani zhoda
 					    	                    	result2[r2][0]=result[j][0];
													result2[r2][1]=result[j][1];
													result2[r2][2]=result[j][2];
													r2++;
								}
								else{ //treti stlpec je Z
								
 					    	 	for(k=0;k<COLOR;k++){
 					    	 		if(k!=matrix[i][2]){
 					    	 		             	result2[r2][0]=result[j][0];
													result2[r2][1]=k;
													result2[r2][2]=result[j][2];
													r2++;
									  }
								  }
								  for(k=0;k<SUBJECT;k++){
 					    	 		if(k!=matrix[i][3]){
 					    	 		             	result2[r2][0]=result[j][0];
													result2[r2][1]=result[j][1];
													result2[r2][2]=k;
													r2++;
									  }
								  }
								  
							  }
						     }
						 }
		  	    	
				  }
  else { //nie je zhoda v 1 stlpci
				  	   if( result[j][0]!=-1){ //prvy stlpec nie je X a nie je zhoda
					       result2[r2][0]=result[j][0];
					       result2[r2][1]=result[j][1];
						   result2[r2][2]=result[j][2];
						   r2++;
                       }
                       else{  //prvy stlpec je X
                       
                       if(result[j][1]!=-1 && result[j][1]!=matrix[i][2]){ // druhy nie je Y, nie je zhoda
					       result2[r2][0]=result[j][0];
					       result2[r2][1]=result[j][1];
						   result2[r2][2]=result[j][2];
						   r2++;
	  					 }
	   					else  if(result[j][1]!=-1 && result[j][1]==matrix[i][2]) // prvy X, a v druhom zhoda
  			                 {
  			                   if(result[j][2]!=matrix[i][3] && result[j][2]!=-1){
						  		   result2[r2][0]=result[j][0];
							       result2[r2][1]=result[j][1];
								   result2[r2][2]=result[j][2];
								   r2++;
				               }
				               else if(result[j][2]==matrix[i][3]){
			                      for(k=0;k<SUBJECT;k++)
			                        if(k!=matrix[i][3]){
							  		   result2[r2][0]=result[j][0];
								       result2[r2][1]=result[j][1];
									   result2[r2][2]=k;
									   r2++;
									   
								   }
								   
				                }
							   else if(result[j][2]!=-1 && result[j][2]!=matrix[i][3]){ // X druhy zhoda treti rozny 
								       result2[r2][0]=result[j][0];
								       result2[r2][1]=result[j][1];
									   result2[r2][2]=result[j][2];
									   r2++;
								   }
				   else if(result[j][2]==-1){
				      for(k=0;k<SIZE;k++)
                        if(k!=matrix[i][1]){
				  		   result2[r2][0]=k;
					       result2[r2][1]=result[j][1];
						   result2[r2][2]=result[j][2];
						   r2++;
					   }
					   for(k=0;k<SUBJECT;k++)
                        if(k!=matrix[i][3]){
				  		   result2[r2][0]=result[j][0];
					       result2[r2][1]=result[j][1];
						   result2[r2][2]=k;
						   r2++;
					   }
				   }
	   	    }
			else { // prvy je X a v druhom nie je zhoda
			    if(result[j][1]!=-1 ){ 
			           result2[r2][0]=result[j][0];
				       result2[r2][1]=result[j][1];
					   result2[r2][2]=result[j][2];
					   r2++;
				}
	            else {  //prvy je X a druhy je Y
	        //    printf("\nPrve X: %d %d %d ",result[j][0],result[j][1],result[j][2]);
                    if(result[j][2]!=matrix[i][3]){
                       result2[r2][0]=result[j][0];
				       result2[r2][1]=result[j][1];
					   result2[r2][2]=result[j][2];
					   r2++;
					}
					else{
					   for(k=0;k<SIZE;k++)
                        if(k!=matrix[i][1]){
				  		   result2[r2][0]=k;
					       result2[r2][1]=result[j][1];
						   result2[r2][2]=result[j][2];
						   r2++;
					   }
					   
					   for(k=0;k<COLOR;k++)
                        if(k!=matrix[i][2]){
				  		   result2[r2][0]=result[j][0];
					       result2[r2][1]=k;
						   result2[r2][2]=result[j][2];
						   r2++;
					   }
					}
				}
			
			}
				  	   
				  }
				  
				  
		  	    	
		      }
		  }
			 }else{//pos
			 
			 }
		  for(k=0;k<r2;k++){
			    
				result[k][0]=result2[k][0];
				result[k][1]=result2[k][1];
				result[k][2]=result2[k][2];
				r1=r2;
				
			}
		
			
		for(j=0;j<r1;j++){
	
		  //    printf("\n %d %d %d", result[j][0],result[j][1],result[j][2]);
		  printf("\n");
		  switch(result[j][0]){
		  	case 0: printf("MALA  "); break;
		  	case 1: printf("VELKA "); break;
		  	case -1: printf("   X  "); break;
		  }
		  	  switch(result[j][1]){
		  	case 0: printf("BIELA   "); break;
		  	case 1: printf("CERVENA "); break;
		  	case 2: printf("MODRA   "); break;
		  	case -1: printf("  Y     "); break;
		  }
		  	  switch(result[j][2]){
		  	case 0: printf("TEHLA "); break;
		  	case 1: printf("KOCKA "); break;
		  	case 2: printf("LOPTA "); break;
		  	case -1: printf("  Z   "); break;
		  }
		  
	    }
	
        }
	
	
	
	
	
	
	return 1;
}





