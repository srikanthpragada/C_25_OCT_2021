#include <stdio.h>

enum timings {MORNING = 1, AFTERNOON, EVENING};
enum paymentmodes {CASH, NEFT, CARD, UPI};

void main()
{
   enum timings  time;

       time = EVENING;

       printf("%d", time);
}
