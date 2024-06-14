#include<stdio.h>

void main(){
    int i,j;
    for(i=5;i>=1;i--){
         char c='E';
        for(j=5;j>=1;j--){
            printf("%c",c);
             c--;
        }
        printf("\n");
    }
}