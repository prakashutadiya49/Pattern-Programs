#include<stdio.h>

void main(){
    int n=5;
    int x=1;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=i;j++)
      {
        printf("%d ",x*x);
        //printf("%d ",x-i);
        x++;
      }
      printf("\n");
      
    }
    // print1();
    // print2();
    // print3();
    // print5();
    print6();
}


void print(){
  int n=5;
  int x=0;
  int c=1;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      printf("%d",x);
    }
    x=x+c;
    c++;
    printf("\n");
  }
}

print1(){
  int x;
  for(int i=1;i<=5;i++){
    x=1;
    for(int j=5;j>=i;j--){
      printf("%d",x);
      x++;
    }
    printf("\n");
  }
}


print2(){
  for(int i=1;i<=5;i++){
    for(int j=1;j<=i;j++){
      if(j%2==0){
        printf("0");
      }
      else{
        printf("1");
      }
    }
    printf("\n");
  }
}

print3(){
  for(int i=0;i<5;i++){
    for(int j=1;j<=2*i+1;j++){
      printf("%d",j);
    }
    printf("\n");
  }
}

print5(){
  for(int i=0;i<=4;i++){
    for(int j=2*i+1;j>=1;j--){
      printf( "%d ",j);
    }
    printf("\n");
  }
}

void print6(){
  for(int i=4;i>=0;i--){
    for(int j=2*i+1;j>=1;j--){
      printf("%d ",j);
    }
    printf("\n");
  }
}

