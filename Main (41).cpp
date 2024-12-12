#include<stdio.h>
#include<math.h>

int main()
{
   int original,n,digit,result=0;
   n=153;
   original = n;
   while (n>0)
   {
       digit = n%10;
       result += pow(digit,3);
       n /= 10;
   }
   if(result == original)
   {
       printf("It is armstrong number");
   }
   else
   {
       printf("It is not armstrong number");
   }
}