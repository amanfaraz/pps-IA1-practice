#include<stdio.h>
typedef struct complex
{
  float real;
  float imag;
} 
complex;
complex input_complex()
{
  complex a;
  printf("enter the real part and imaginary part respectively \n");
  scanf("%f%f",&a.real,&a.imag);
  return a;
}
complex add(complex a,complex b)
{
  complex c;
  c.real=a.real+b.real;
  c.imag=a.imag+b.imag;
  return c;
}
void output(complex a,complex b,complex c)
{
  printf("%0.1f + %0.1fi + %0.1f +%0.1fi = %0.1f + %0.1fi",a.real,a.imag,b.real,b.imag,c.real,c.imag);
}
int main()
{
  complex a,b,result;
  a=input_complex();
  b=input_complex();
  result=add(a,b);
  output(a,b,result);
  return 0;
}