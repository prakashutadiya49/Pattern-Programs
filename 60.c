#include<stdio.h>

void main(){
    int n=10;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n;j++)
      {
      if(i%2==0){
        printf("0");
      }
      else{
        printf("1");
      }
      }
      printf("\n");
      
    }
    
}