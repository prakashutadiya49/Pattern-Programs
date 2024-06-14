#include<stdio.h>

void main(){
    int n=3,j;
    for(int i=3;i>=-3;i--){
        for(j=abs(i);j<=n;j++){
            printf("%c",j+65);
        }
printf("\n");
}
}