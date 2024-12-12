#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,8};
    int sum=0;
    int n=8;
    int arr_size = sizeof(array)/sizeof(int);
    for(int i=0;i< arr_size;i++)
    {
        sum +=array[i];
    }
    int total = n*(n+1)/2;
    int missed = total -sum;
    printf("%d",missed);
    
}