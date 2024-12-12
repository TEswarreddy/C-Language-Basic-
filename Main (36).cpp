// You are using GCC
// You are using GCC
#include<stdio.h>
bool power(int n)
{
  
    
    if(n==1)
    {
        return true;
    }
    if(n%2==0)
    {
        power(n/2);
    }
    
   
    
}
int main()
{
    bool ispower = false;
    ispower=power(32);
    
    if(ispower == true)
    {
        printf("is power of 2 \n");
        
    }
    else
    {
        printf("it is not");
    }
}