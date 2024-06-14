#include<stdio.h>
void upper_part(){
     int n=5;
    int i,j,k;// k for space printing;
    for ( i = 1; i <=5; i++)
    {
      for ( k = n-1; k>=i; k--) // when space in decsing order at that time condition is always >= or when incrising order at that time <=
      {
        printf(" ");
      }
      for (j = 1;j<=i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
}
void main(){
    int n=5;
    int i,j,k;// k for space printing;
    upper_part();
    for ( i = n; i >=1; i--)
    {
      for ( k = n-1; k>=i; k--) // when space in decsing order at that time condition is always >= or when incrising order at that time <=
      {
        printf(" ");
      }
      for (j=1;j<=i; j++)
      {
        printf("*");
      }
      printf("\n");
    }
    
}