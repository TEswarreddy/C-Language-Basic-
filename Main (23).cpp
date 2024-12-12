#include<stdio.h>
int main()
{
    int n=32;
    while(n>0)
    {
        if(n%2 == 0)
        {
            n=n/2;
        }
        else
        {
            break;
        }
    }
    if(n==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}