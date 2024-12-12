#include<stdio.h>

int sumnat(int sum,int n)
{
    if (n==0)
    {
        return sum;
    }
    sum +=n;
    sumnat(sum,n-1);
    
}
int main()
{
    int sum = sumnat(0,5);
    printf("%d",sum);
}