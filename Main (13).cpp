#include<stdio.h>
int main()
{
    int  n=5,res=1;
    for(int i=1;i<=n;i++)
    {
        res *=i;
    }
    printf("%d",res);
}