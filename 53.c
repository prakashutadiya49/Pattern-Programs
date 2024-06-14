#include<stdio.h>

void main(){
    int n=3,j;
    for(int i=n;i>=-n;i--){
        for(j=1;j<=abs(i);j++){
            printf(" ");
        }
        for(int k=n;k>=abs(i);k--){
            // printf("*");
            //  printf("%c",abs(i)+65);
            //  printf("%d",abs(i));

            // diff. pattern
            printf("*");
            // printf("%c ",abs(i)+65);
            //  printf("%d ",abs(i));
        }
printf("\n");
}
print();
}

void print(){
    int n=3;
    for(int i=3;i>=-n;i--)
    {
    for(int j=n;j>=abs(i);j--){
        printf("* ");
    }
    printf("\n");
}
}


