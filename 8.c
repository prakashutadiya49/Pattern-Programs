#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i<=5;i++){
         char c='A';
        for(j=1;j<=5;j++){
            printf("%c",c);
            c++;
        }
        printf("\n");
    }
}
