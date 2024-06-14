#include<stdio.h>

void main(){
    int n=5;
    //upper half

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
             printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            //printf("* ");
             printf("*");
        }
        printf("\n");
    }
      
      //lover half

    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
             printf(" ");
        }
        for(int j=1;j<=2*i-1;j++){
            //printf("* ");
             printf("*");
        }
        printf("\n");
    }
      
    }
    
