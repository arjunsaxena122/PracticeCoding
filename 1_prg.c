#include<stdio.h>
void main()
{
int m,n;
printf("enter value of m and n is ");
scanf("%d%d",&m,&n);
long int val=1;
for (int i = 0; i <n; i++)
{
    val=val*m;

}
printf("the %d power of %d is %d",m,n,val);
        return 0;

}