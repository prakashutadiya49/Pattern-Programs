#include<stdio.h>

void main(){
    int n=7;
    int mid=(n+1)/2;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n ; j++)
      {
      if(j==mid || i-j==mid-1 || i+j==n+mid){
        printf("*");
      }
      else{
        printf(" ");
      }
      }
      printf("\n");
      
    }
    
}