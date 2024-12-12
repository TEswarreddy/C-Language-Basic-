// You are using GCC
// You are using GCC
#include<stdio.h>
void printNumber(int n)
{
    printf("im in %d printNumber function \n",n);
    
    if(n==0)
    {
        return;
    }
    printNumber(n-1);
    printf(" %d\n",n);
    
}
int main()
{
    printNumber(5);
}