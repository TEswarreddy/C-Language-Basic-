#include<stdio.h>
int main()
{
    int n=32,count=0;
    while(n>0)
    {
        n=n>>1;
        if((n&1)==1)
        {
            count++;
        }
    }
    if(count==1)
    {
        printf("It is square of 2");
    }
    else
    {
        printf("It is not sqaure of 2");
    }
}