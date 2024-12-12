// You are using GCC
// You are using GCC
#include<stdio.h>
int main()
{
    int n=17;
    int pos=5;
    int shifted=1<<(pos-1);
    
    if((n&shifted) == 0)
    {
        printf("the %d of bit is 0",pos);
    }
    else{
        printf("the %d of bit is 1",pos);
    }
}