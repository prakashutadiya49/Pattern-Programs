#include<stdio.h>

void main(){
    int n=4;
    int z=7;
    for(int i=n;i>=1;i--){
        for(int j=n-1;j>=i;j--){
            printf(" ");
        }
        for(int k=1;k<=z;k++){
            printf("*");
        }
z-=2;
printf("\n");
}
}