#include<stdio.h>

void main(){
    int n=9;
    int mid=(n+1)/2;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n;j++)
      {
      if(i+j==mid+1 || j-i==mid-1 || i+j==n+mid || i-j==mid-1){
        printf("*");
      }
      else{
        printf(" ");
      }
      }
      printf("\n");
      
    }
    
}