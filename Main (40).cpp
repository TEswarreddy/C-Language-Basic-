#include<stdio.h>

int sum(int n)
{
    if (n==1)
    {
        return n;
    }
    return n+sum(n-1);
    
}
int main()
{
    int s = sum(5);
    printf("%d",s);
}