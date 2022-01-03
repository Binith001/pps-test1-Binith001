#include<stdio.h>
void input(int *a, int *b)
{
  printf("enter num:");
  scanf("%d%d",a,b);
}

void add (int a,int b)
{
  int *sum=0;
  *sum = a+b;
}
  int output(int a,int b,int sum)
{
  printf("the sum of %d and %d = %d",a,b,sum);
}
int main()
{
  int a,b,sum;
  input(&a,&b);
  add(a,b);
  output(a, b, &sum);
  return 0;
}
