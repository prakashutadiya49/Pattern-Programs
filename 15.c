#include<stdio.h>

void main(){
    int i,j;
    char c;
    for(i=1;i<=5;i++){
        c='A';
        for(j=1;j<=i;j++){
            printf(" %c ",c);
            c++;
        }
         printf("\n");
    }
}