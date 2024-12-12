// You are using GCC
#include<stdio.h>
void demo(int n)
{
    printf(" %d\n",n);
    if(n>1)
    {
        demo(n-1);
    }
}
int main()
{
    demo(5);
}