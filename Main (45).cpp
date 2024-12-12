#include<stdio.h>
int main()
{
    char name[]={'n','a','v','e','e','n'};
    char temp;
    int n=sizeof(name)/sizeof(name[0]);
    int l=0;
    int r=n-1;
    while(l<r)
    {
        temp=name[l];
        name[l]=name[r];
        name[r]=temp;
        l++;
        r--;
    }
    for(int i=0;i<n;i++)
    {
        printf("%c \t",name[i]);
    }
    
    
    
}