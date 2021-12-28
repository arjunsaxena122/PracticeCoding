#include<stdio.h>
int factorialiternative(int n){
    int val=1;
    for (int i = n; i > 1; i--)
    {
        val*=i;
    
    }
    return val;
}
int main()
{
    int n;
    printf(" The enter value of n is ");
    scanf("%d",&n);
    int factorial=factorialiternative(n);
    printf("the factorial of %d is %d",n,factorial);

    return 0;
}