#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int n=1;n<=i;n++)
        {
            printf(" * \t");
        }
        printf("\n");
    }
}