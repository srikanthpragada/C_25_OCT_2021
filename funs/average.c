#include <stdio.h>

float avg(int,int);  // Function Declaration

void main()
{
  float a;

     a = avg(10, 15);
     printf("%f", a);
}

// Function Definition
float avg(int a, int b)
{
   return  (a + b) / 2.0;
}
