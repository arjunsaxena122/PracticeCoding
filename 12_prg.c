#include<stdio.h>
int main()
{
    int n,rem,rev;
    printf("The enter value of n is ");
    scanf("%d",&n);
    while(n!=0)
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    printf("The number %d  reverse is %d:",n,rev);
    return 0;
}