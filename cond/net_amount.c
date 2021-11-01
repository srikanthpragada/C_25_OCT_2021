//Calculate net amount

#include <stdio.h>

void main()
{
 int quantity, price, amount, gross_amount, discount, tax, net_amount;

    printf("Enter  Quantity : ");
    scanf("%d", &quantity);

    printf("Enter Price     : ");
    scanf("%d", &price);

    amount = price * quantity;

    if (quantity > 2)
        discount = amount  * 10 / 100;
    else
        discount = amount  * 5 / 100;

    gross_amount = amount - discount;
    tax = gross_amount * 5 / 100;
    net_amount = gross_amount + tax;

    printf("Net Amount = %d", net_amount);

}
