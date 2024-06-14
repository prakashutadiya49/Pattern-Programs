#include<stdio.h>

void main(){
    int i,j;
    char c='A';
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf(" %c ",c);
        }
        c++;
        printf("\n");
    }
}