#include<stdio.h>

void main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=n-i;j>=1;j--){
             printf(" ");
        }
        for(int j=1;j<=n;j++){
             printf("*");
        }
        printf("\n");
    }
      
      
    }
    
