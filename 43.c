#include<stdio.h>

void main(){
    int n=7;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==1 || i==n || j==1 || j==n){
                printf(" 4 ");
            }
            else if(i==2 || i==n-1 || j==2 || j==n-1){
                printf(" 3 ");
            }
            else if(i==3 || i==n-2 || j==3 || j==n-2){
                printf(" 2 ");
            }
            else if(i==4 || i==n-3 || j==4 || j==n-3){
                printf(" 1 ");
            }
    }
    printf("\n");
}
}

print(){
    int n=7;
    for(int i=1;i<=7;i++){
        for(int j=1;j<=7;j++){
            if(i==1 || i==n || j==1 || j==n) {
                printf("4");
            }
            else if(i==2 || i==n-1 || j==2 || j==n-1) {
                printf("3");
            }
            else if(i==3 || i==n-2 || j==3 || j==n-2) {
                printf("2");
            }
            else if(i==4 || i==n-3 || j==4 || j==n-3) {
                printf("1");
            }
        }
    }
}
