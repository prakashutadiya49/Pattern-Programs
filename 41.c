#include<stdio.h>

void main(){
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j || ((i+j)==(n+1))){ // another condition n-i+1
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}