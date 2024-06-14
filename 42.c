#include<stdio.h>

void main(){
    int n=10;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || ((i+j)==(n+1))){ // another condition n-i+1
                printf("  ");
            }
            // if(i==5 && j==5){
            //     printf(" ");
            // }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
}