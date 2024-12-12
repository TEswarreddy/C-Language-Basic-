#include<stdio.h>
int main()
{
    int arr[]={1,2,3,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            printf("It is not a sorted array \n");
            break;
        }
        if(i==(n-1))
        {
            printf("sorted array");
        }
    }
}