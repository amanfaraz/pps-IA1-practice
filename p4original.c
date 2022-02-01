#include<stdio.h>
int input_array_size()
{
  int a;
  printf("Enter the array size: \n");
  scanf("%d",&a);
  return a;
}
void input_array(int n, int a[n])
{
  for (int i=0;i<n;i++)
  {
    printf("enter a number: \n");
    scanf("%d", &a[i]);
  }
}
int sum_n_array(int n,int a[n])
{
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum+=a[i];
  }
  return sum;
}
void out_put(int n,int a[n],int sum)
{
  for(int i=0;i<a[n-2];i++)
  {
    printf("%d+",a[i]);
  }
  printf("%d is %d",a[n-1], sum);
}
int main()
{
  int n,result;
  n=input_array_size();
  int a[n];
  input_array(n,a);
  result=sum_n_array(n,a);
  out_put(n,a,result);
  return 0;
}
