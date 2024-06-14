#include <stdio.h>

void main()
{
    int n = 10;
    int m = ((n / 2) + 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == m || j == m || (i == 1 && j >= m) || (i == n && j <= m) || (j == 1 && i <= m) || (j == n && i>= m))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    print();
}

print(){
    int n=10;
    int m=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i == m || j == m || (i == 1 && j >= m) || (i == n && j <= m) || (j == 1 && i <= m) || (j == n && i>= m)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

