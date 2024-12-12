#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5,6,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int left =0;
    int right=n-1;
    while(left<right)
    {
        int sum= arr[left]+arr[right];
        
        if(sum == 11)
        {
            printf("%d %d \n",left,right);
            left++;
            right--;
        }
        else if(sum < 11)
        {
            left++;
        }
        else
        {
            right--;
        }
        
        if(left == right)
        {
            printf("not found");
            break;
        }
    }
}