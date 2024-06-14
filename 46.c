#include<stdio.h>

void main(){
    int n=4;
    int z=1;
    for(int i=1;i<=n;i++){
        for(int j=n-1;j>=i;j--){
            printf("   ");
        }
        for(int k=1;k<=z;k++){
            printf(" * ");
        }
z+=2;
printf("\n");
}
print();
}

void print(){
    int n=4;
    int z=1;
    
    for(int i=1;i<=n;i++){
        for(int k=n-1;k>=i;k--)
        {
            printf(" ");
        }
        for(int j=1;j<=z;j++){
            printf( "*" );
        }
        printf("\n");
        z+=2;
    }
    print3();
}

void print3(){
    int n=4;
    int z=1;
    for(int i=1;i<=n;i++){
        for(int k=n-1;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=z;j++){
            printf("%d",z);
        }
        printf("\n");
        z=z+2;


    }
}