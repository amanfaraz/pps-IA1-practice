#include<stdio.h>
typedef struct complex
{
  float real;
  float imag;
}
complex;
int get_n()
{
  int a;
  printf("Enter how many complex number you want to add: ");
  scanf("%d",&a);
  return a;
}
void input_n_complex(int n, complex c[n])
{
  for(int i=0;i<n;i++)
  {
    printf("enter a real number: ");
    scanf("%f", &c[i].real);
    printf("enter a imaginary number: ");
    scanf("%f", &c[i].imag);
  }
}
complex add(complex a,complex b)
{
  complex temp;
  temp.real=a.real+b.real;
  temp.imag=a.imag+b.imag;
  return temp;
}
complex add_n_complex(int n,complex c[n])
{
  complex as;
  as.real=0;
  as.imag=0; 
  for (int i=0;i<n;i++)
  {
    as=add(as,c[i]);
  }
  return as;
}
void output(int n, complex c[n], complex result)
{
  for (int i=0;i<n-1;i++)
  {
    printf("%0.1f + %0.1fi +",c[i].real,c[i].imag);
  }
  printf("%0.1f + %0.1fi is %0.1f+%0.1fi",c[n-1].real,c[n-1].imag,result.real,result.imag);
}
int main()
{
  int n;
  n=get_n();
  complex a[n],result;
  input_n_complex(n,a);
  result=add_n_complex(n,a);
  output(n,a,result);
  return 0;
}
