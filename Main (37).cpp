#include<stdio.h>
int sum = 0;
int sumnat(int n)
{
    if (n==0)
    {
        return sum;
    }
    sum +=n;
    sumnat(n-1);
    
}
int main()
{
    int sum = sumnat(5);
    printf("%d",sum);
}