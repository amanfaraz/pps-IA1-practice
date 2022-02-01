#include<stdio.h>
float input()
{
  float a;
  printf("Enter a number: ");
  scanf("%f",&a);
  return a;
}
float my_sqrt(float n)
{
  double start=0,end=n,mid;
  while(end-start>0.000001)
  {
    mid=(start+end)/2;
    if (mid*mid<n)
    {
      start=mid;
    }
    if (mid*mid>=n)
    {
      end=mid;
    }
  }
  return mid;
}
  void output(float n,float result)
  {
    printf("The squareroot of %f is %0.3f \n",n,result);
  }
int main()
{
  float n,result;
  n=input();
  result=my_sqrt(n);
  output(n,result);
  return 0;
}