#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n;i++)
   {
       if((arr[i]+arr[i+1])== 11)
       {
           printf("%d %d\n",i,i+1);
       }
   }
}