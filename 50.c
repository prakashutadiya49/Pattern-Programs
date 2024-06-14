#include<stdio.h>

void main(){
    int n=3;
    for(int i=3;i>=-3;i--){
        for(int j=n;j>=abs(i);j--){
            printf("%c",j+65);
        }
printf("\n");
}
}