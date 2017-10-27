#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 4  // riadky
#define N 7  // stlpce

int main(){
 srand(time(NULL)); // premiesanie cisel
 int matrix[M][N];
 int i,j;
 
 for(i=0; i<M; i++){    // generovanie nahodnych cisel do matice
     for(j=0;j<N;j++){
          matrix[i][j]=rand()%100;   
	 }
 }
 
 for(i=0; i<M; i++){    // vypis pola po riadkoch
     for(j=0;j<N;j++){ 
        printf("%2d ", matrix[i][j]);
    }
    printf("\n");
 }
 
 printf("\n");
 
  for(j=0;j<N;j++){    // vypis pola po stlpcoch
     for(i=0; i<M; i++){ 
        printf("%2d ", matrix[i][j]);
    }
    printf("\n");
 }
 
 printf("\n");
 // vypis 3. riadku (index=2)
 for(j=0;j<N;j++){
    printf("%2d ",matrix[2][j]);
 }
 
  printf("\n");
 // vypis 3. stlpca (index=2)
 for(i=0;i<M;i++){
    printf("%2d ",matrix[i][2]);
 }
  
  printf("\n");
 // vypis hlavnej diagonaly
 int min;
 if(M<N) min = M; else min=N;  
 for(int ij=0; ij<min; ij++ ){
     printf("%2d ",matrix[ij][ij]);
 }  
 
 printf("\n");
 // vypis vedlajsej diagonaly
 min = M<N ? M:N;  // to iste ako: if(M<N) min = M; else min=N;
 for(int i=0; i<min; i++ ){
     printf("%2d ",matrix[i][N-i-1]);
 }  
 
 printf("\n");
 // max cislo v poslednom riadku tabulky
 int max=matrix[M-1][0];
  for(int j=1; j<N; j++ ){
     if(max < matrix[M-1][j])
         max = matrix[M-1][j];
 }  
 printf("Max number in the last row: %2d ",max);
 
  printf("\n");
 // min cislo v poslednom stlpci tabulky
  min=matrix[0][N-1];
  for(int i=1; i<M; i++ ){
     if(min > matrix[i][N-1])
         min = matrix[i][N-1];
 }  
 printf("Min number in the last column: %2d ",min);
 
 printf("\n");
 // max cislo v tabulke
  max=matrix[0][0];
  for(int i=0; i<M; i++ ){
	  for(int j=0; j<N; j++ ){
	     if(max < matrix[i][j])
	         max = matrix[i][j];
	  }
  }  
  printf("Max number in the table: %2d ",max);
  
   printf("\n");
 // min cislo v tabulke
  min=matrix[0][0];
  for(int i=0; i<M; i++ ){
	  for(int j=0; j<N; j++ ){
	     if(min > matrix[i][j])
	         min = matrix[i][j];
	  }
  }
 printf("Min number in the table: %2d ",min);
 
}
