#include<stdio.h>
int main()
{
  int age;
  printf("enter your age: \t");
  scanf("%d",&age);
  if(age > 19)
  {
      printf("ADULTS");
  }
  else if(age >= 13)
  {
      printf("TEENAGE");
  }
  else
  {
      printf("Child");
  }
}
