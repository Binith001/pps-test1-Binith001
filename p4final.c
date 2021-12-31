#include<stdio.h>
int input()
{
  int num1,num2,num3;
  printf("Enter the Number: ");
  scanf("%d",&num1);
  return num1;
}
int cmp(int a,int b,int c)
{
  if(a>b && a>c)
  {
    return a;
  }
  else if (b>c)
  {
    return b;
  }
  else 
  {
    return c;
  }
}
int output(int large)
{
  printf("The Largest Number is %d",large);
}
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
  largest=cmp(a,b,c);
  output(largest);
  return 0;
}