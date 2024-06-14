#include<stdio.h>

void main(){
    int n=5,i;
    for ( i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=n;j++)
      {
        // printf("%2d ",(i+j)%2);
        // printf("%2d ",(j*i)%2);
        // printf("%2d ",i%2);

        if (i%2==0)
        {
            printf("1 ");
        }
        else{
            printf("0 ");
        }
      }
      printf("\n");
      
    }
    
}