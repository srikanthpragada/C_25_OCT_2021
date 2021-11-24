
#include <stdio.h>

struct student
{
   int admno;
   char name[30];
   char course[20];
   int feepaid;
};

void main()
{
  struct student s1;

     s1.admno = 1;
     strcpy(s1.name,"James");
     strcpy(s1.course, "Java");
     s1.feepaid = 5000;

     printf("%2d %-20s %-10s  %5d", s1.admno, s1.name, s1.course, s1.feepaid);

}
