#include<stdio.h>
int main()
{
    int i,n=2,m,count=0;
    printf("enter a number: \t");
    scanf("%d",&m);
    while(n<=m)
    {
        i=2;
        while(i<=6)
        {
            if(n%i == 0)
            {
                count++;
            }
            i++;
        }
        if(count <=1)
        {
            printf("%d \n",n);
        }
        n++;
        count=0;
    }
}