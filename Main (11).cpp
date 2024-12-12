// You are using GCC
#include<stdio.h>
int main()
{
    int n=153;
    printf("Enter a number:\t");
    scanf("%d",&n);
    int rem,rev=0;
    while(n>0)
    {
        rem = n%10;
        //printf("%d \n",rem);
        rev =rev*10+rem;
        //printf("%d \n",rev);
        n = n/10;
        //printf("%d \n",n);
    }
    printf("%d",rev);
   
}