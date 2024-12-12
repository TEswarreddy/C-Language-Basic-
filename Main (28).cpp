#include<stdio.h>
int main()
{
    int array[]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    int n= sizeof(array)/sizeof(int);
    for(int i=0;i<n;i++)
    {
        sum +=array[i];
    }
    printf("Sum:%d",sum);
}