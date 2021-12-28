#include <stdio.h>
int main()
{
    char sr[]="arjunsaxena";
    char temp;
    int len=0;
    while (sr[len]!='\0')
    {
        len++;
    }
    printf("the length of string is %d\n",len);
    for (int i = 0; i  < (len-1)/2; i++)
    {
        temp=sr[i];
        sr[i]=sr[len-1-i];
        sr[len-1-i]=temp;

    }
    printf("%s",sr);
    
    return 0;
}