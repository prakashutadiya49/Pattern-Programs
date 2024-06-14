#include <stdio.h>

void upper_part(){
    int n = 5;
    int px = n, py = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n * 2; j++)
        {
            if (j == px || j == py)
            {
                printf("*");
              printf("%c",i+64);
                printf("%d",i-1);
                 printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        px++;
        py--;
        printf("\n");
    }
}


void main()
{
    // upper_part();
    int n = 5;
    int px = 1, py = (n*2)-1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j == px || j == py)
            {
                printf("*");
            //     printf("%c",i+64);
            //      printf("%d",i-1);
            //       printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        px++;
        py--;
        printf("\n");
    }
}