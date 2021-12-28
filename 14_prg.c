#include <stdio.h>
int main()
{
    int n=.41;
    int isprime = 1;
    for (int i = 2; i * i < n; i++)

    {
        if (n % i == 0)
        {
            isprime = 0;
        }
    }
    if (isprime)
    {
        printf("prime ");
    }
    else
    {
        printf("%d is not  prime no.", n);
    }

    return 0;
}