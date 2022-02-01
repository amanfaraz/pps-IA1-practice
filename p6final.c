#include<stdio.h>
void input_two_strings(char *a, char *b)
{
  printf("Enter two strings: \n");
  scanf("%s%s",a,b);
}
int str_cmp(char *a,char *b)
{
  int x;
  int i=0;
  while(a[i]!='\0' && b[i]!='\0')
  {
    if (a[i]>b[i])
    {
      x=1;
    }
    else if (b[i]>a[i])
    {
      x=-1;
    }
    else
    {
      i++;
    }
  }
  if (a[i]=='\0')
  {
    x=-1;
  }
  else if(b[i]=='\0')
  {
    x=1;
  }
  if(a[i]=='\0' && b[i]=='\0')
  {
    x=0;
  }
  return x;
}
void output(char *a, char *b, int result)
{
  if (result==1)
  {
    printf("%s is greater than %s",a,b);
  }
  else if (result==-1)
  {
    printf("%s is greater than %s",b,a);
  }
  else if (result==0)
  {
    printf("%s is equals to %s",a,b);
  }
  else
  {
    printf("Invalid");
  }
}
int main()
{
  char a[50],b[50];
  int result;
  input_two_strings(a,b);
  result=str_cmp(a,b);
  output(a,b,result);
  return 0;
}
