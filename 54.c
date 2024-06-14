#include <stdio.h>

void main()
{
    int n = 5;
    int px = n, py = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n * 2; j++)
        {
            if (j == px || j == py)
            {
                //printf("*");
                //printf("%c",i+64);
               // printf("%d",i-1);
            //       printf("%d",i);
            }
            else
            {
                printf(" ");
            }
        }
        px--;
        py++;
        printf("\n");
    }
}