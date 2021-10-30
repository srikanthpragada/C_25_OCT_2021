// program to calculate final price to be paid after discount

#include <stdio.h>

void main()
{
  int price, discount;

    printf("Enter price :");
    scanf("%d", &price);

    if (price > 10000)
        discount = price * 20 / 100;
    else
        discount = price * 10 / 100;

    printf("Net price = %d", price - discount);
}
