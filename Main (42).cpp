#include<stdio.h>
int main()
{
    int n;
    scanf("%d ",&n);
    while(n>1)
    {
        if(n%2 == 0)
        {
            n /=2;
            printf("%d \n",n);
        }else{
            n = (n*3)+1;
            printf("%d \n",n);
        }
    }
    
}