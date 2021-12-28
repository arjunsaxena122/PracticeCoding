#include<stdio.h>
int returnMax(int arr[],int n)
{
    int max=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main(){
    //int i;
    int arr[]={23,1,4,53,6,4,25,6,34,7,8,345,7,53345,3455};
    //printf("The enter no. of arr is ");
    //scanf("%d",arr[i]);
    int max=returnMax(arr,15);
    printf("The max element %d",max);
    return 0;
}