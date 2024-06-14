#include<stdio.h>

void main(){
    int i,j;
    int n=1;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" %d ",n);
        }
        n++;
        printf("\n");
    }
}