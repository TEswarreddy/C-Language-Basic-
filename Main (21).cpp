// You are using GCC
#include<stdio.h>
int main()
{
    int n=8;
    int pos=4;
    int shifted=n<<(pos-1);
    printf("%d \n",shifted);
    if((n&shifted) == 0)
    {
        printf("the %d of bit is 0",pos);
    }
    else{
        printf("the %d of bit is 1",pos);
    }
}