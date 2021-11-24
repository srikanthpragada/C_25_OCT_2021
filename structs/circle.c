#include <stdio.h>

struct circle
{
   int x, y, radius;
};

void main()
{
  struct circle c1;
  int area;

      printf("Enter x,y and radius : ");
      scanf("%d%d%d", &c1.x, &c1.y, &c1.radius);

      area = 3.14 * c1.radius * c1.radius;
      printf("Area of circle at %d,%d with radius %d is %d", c1.x, c1.y, c1.radius, area);

}
