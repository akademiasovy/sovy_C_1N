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
 
}
