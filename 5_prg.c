#include <stdio.h>
int main()
{
    int n;
    printf("The enter value of n is ");
    scanf("%d", &n);
    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf(" \n");
    }

    return 0;
}