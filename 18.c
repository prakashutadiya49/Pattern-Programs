#include<stdio.h>

void main(){
    int i,j;
    int x=5;
    for(i=1;i<=5;i++){
        for(j=5;j>=i;j--){
            printf(" %d ",x);
        }
        x--;
        printf("\n");
    }
}