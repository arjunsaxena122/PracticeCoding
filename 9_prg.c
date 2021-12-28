#include<stdio.h>
int main()
{
    int n;
    printf("The enter the value of n is ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <i+1; j++)
        {
            
                printf("%d",i);
         
        }
        printf("\n");
    }
    
    return 0;
}
