#include<stdio.h>
int input()
{
  int a;
  printf("Enter a number: \n");
  scanf("%d",&a);
  return a;
}
int str_cmp(int a, int b, int c)
{
  int big;
  if (a>b && a>c)
  {
    big=a;
  }
  else if(b>a && b>c)
  {
    big=b;
  }
  else
  {
    big=c;
  }
  return big;
}
void output(int a, int b, int c, int result)
{
  printf("Out of %d,%d,%d, %d is the largest \n",a,b,c,result);
}
int main()
{
  int a,b,c,result;
  a=input();
  b=input();
  c=input();
  result=str_cmp(a,b,c);
  output(a,b,c,result);
  return 0;
}