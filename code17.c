#include <stdio.h>
int main()
{
float units, bill;
printf("Enter units consumed:");
 scanf("%f", &units);

if (units <= 100)
    bill = units * 1.50;
else if (units <= 200)
    bill = units * 2.50;
else if (units <= 300)
    bill = units * 400;
else
    bill = units * 6.00;
printf("Electricity Bill = Rs. %.2f\n", bill);
return 0;
}
