#include <stdio.h>

struct time  {
   int h,m,s;
};

typedef struct time TIME;
typedef int NUMBER;

struct time nextsecond(struct time t);

void setzero(struct time * pt)
{
     pt -> h = 0;
     pt -> m = 0;
     pt -> s = 0;
}

int totalseconds(struct time t)
{
    return t.h * 3600 + t.m * 60 + t.s;
}

// 0  - t1 == t2, >0 - t1 > t2, <0 - t1 < t2
int compare(TIME t1, TIME t2)
{
   return  totalseconds(t1) - totalseconds(t2);
}

struct time nextsecond(struct time t)
{
   t.s ++;
   if (t.s == 60)
   {
       t.s  = 0;
       t.m ++;
       if (t.m == 60)
       {
           t.m = 0;
           t.h ++;
           if(t.h == 24)
             t.h = 0;
       }
   }

   return t;
}

void print_time(struct time t)
{
  printf("%02d:%02d:%02d", t.h,t.m,t.s);
}

void main()
{
  struct time times[5], largest = {0,0,0};
  int i;
  struct time t = {10,59,59};

      t = nextsecond(t);
      print_time(t);
      printf("\n");
      setzero(&t); // pass struct time by reference

      srand(time(0));
      for (i = 0 ; i < 5;i ++)
      {
          times[i].h = rand() % 24;
          times[i].m = rand() % 60;
          times[i].s = rand() % 60;
          printf("%02d:%02d:%02d %6d\n", times[i].h, times[i].m, times[i].s, totalseconds(times[i]));

          if (compare(times[i], largest) > 0)
               largest = times[i];
      }

      printf("%02d:%02d:%02d\n", largest.h, largest.m, largest.s);

}
