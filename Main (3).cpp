#include<stdio.h>
#include<limits.h>
int main()
{
    int max = INT_MAX;
    int min = INT_MIN;
    printf("before adding 1 %d \n",max);
    printf("\n before sub  1 %d \n",min);
    
    printf("after adding 1 %d \n",max+1);
    printf("after sub 1 %d \n",max-1);
    
}