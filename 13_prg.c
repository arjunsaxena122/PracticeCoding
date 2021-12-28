#include <stdio.h>
int main()
{
    int n;
    int i = 0;
    int a[10];
    int rem;
    printf("The enter value of n is ");
    scanf("%d", &n);
    while (n!=0)
    {
        rem = n % 2;
        n = n / 2;
        a[i]= rem;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}