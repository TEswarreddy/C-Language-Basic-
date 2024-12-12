#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    int n= sizeof(array)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        if(array[i]%2 == 0)
        {
            printf(" \n %d is an even",array[i]);
        }
        else
        {
            printf("\n %d is an odd",array[i]);
        }
    }
    
}