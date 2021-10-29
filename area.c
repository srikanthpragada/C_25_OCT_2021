//Program to display area of the circle

#include<stdio.h>

void main()
{
  int radius,area;

        printf("Enter the radius : ");
        scanf("%d",&radius);

        area = 3.14 * radius * radius; // pie = 3.14

        printf("Area of circle = %d" , area);
}
