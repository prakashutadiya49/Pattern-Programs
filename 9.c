#include<stdio.h>

void main(){
    int i,j;
    char c='E';
    for(i=5;i>=1;i--){
        for(j=5;j>=1;j--){
            printf("%c",c);
        }
        c--;
        printf("\n");
    }
}