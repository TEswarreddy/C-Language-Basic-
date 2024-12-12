// You are using GCC
#include<stdio.h>
int comparision(int a,int b)
{
    if(a>b)
    {
        return a;
        
    }
    else{
        return b;
        
    }
}
int main()
{
    int a=10;
    int b=20;
    int c=comparision(a,b);
    printf("%d",c);
}