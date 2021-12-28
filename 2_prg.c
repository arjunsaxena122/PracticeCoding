#include<stdio.h>
int main()
{
    int n, count=0;
    printf("enter the value of n is ");
    scanf("%d",&n);
    if (n==0)

    {
        printf("those is only 1 digit required for this program");
    }
    else{
    while(n)
    {
        n=n%10;
        count++;
    }
    }
    printf("there are value of %d is ",count);
    return 0;

}