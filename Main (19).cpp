// You are using GCC
#include<stdio.h>
int main()
{
    int n=8;
    int pos=4;
    int s;
    n=n>>(pos-1);
    printf("%d \n",n);
    if((n&1) == 0)
    {
        printf("the %d of bit is 0",pos);
    }
    else{
        printf("the %d of bit is 1",pos);
    }
}