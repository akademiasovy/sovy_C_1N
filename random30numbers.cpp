#include <stdio.h>


int main()
{
  FILE *f=fopen("nahodne500cisla.txt","r");
  int arr[50000];
  int i=0;
  int temp;
  while( fscanf(f,"%d", &temp)!= EOF ){
     arr[i]=temp;
	 i++;   
  }
  fclose(f);
  int n=i; //pocet cisel
  
  int max=arr[0];
  for(i=1;i<n;i++){
     if(max<arr[i])
        max=arr[i];
  }
  printf("\nMax number is %d", max);
  
  int min=arr[0];
  for(i=1;i<n;i++){
     if(min>arr[i])
    min=arr[i];
  }
  printf("\nMin number is %d", min);
    
}
