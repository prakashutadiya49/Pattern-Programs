#include <stdio.h>

void main()
{
    int n = 3;
    for (int i = 3; i >= -3; i--)
    {
        for (int j = n; j >= abs(i); j--)
        {
            printf("*");
        }
        printf("\n");
    }
    print();
}

void print()
{
    int n = 3;
    for (int i = 3; i >= -3; i--)
    {
        for (int j = 0; j <= abs(i); j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

