#include<stdio.h>

void main(){
    int n=7;
    int mid=(n+1)/2;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n;j++)
      {
      if(i==j || i==1 || j==1){
        printf("*");
      }
      else{
        printf(" ");
      }
      }
      printf("\n");
      
    }
    
}