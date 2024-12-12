// You are using GCC
// You are using GCC
#include<stdio.h>
void demo(int n)
{
    
    if(n==0)
    {
        return;
    }
    printf(" %d\n",n);
    demo(n-1);
}
int main()
{
    demo(5);
}