#include<stdio.h>
#include<limits.h>
int main()
{
    int max = INT_MAX;
    int min = INT_MIN;
    
    printf("Range of int %d to %d",min,max);
    printf("\n before adding 1 %d \n",max);
    printf("\n before sub  1 %d \n",min);
    
    printf("\n after adding 1 %d \n",max+1);
    printf("\n after sub 1 %d \n",max-1);
    
}