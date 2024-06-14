#include<stdio.h>

void main(){
    int n=5;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n;j++)
      {
        printf("%d",i+j-1);
      }
      printf("\n");
      
    }
    
}