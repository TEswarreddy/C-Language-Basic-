#include<stdio.h>

int factorial(int n)
{
    if (n==1)
    {
        return n;
    }
    return n*factorial(n-1);
    
}
int main()
{
    int factval = factorial(5);
    printf("%d",factval);
}