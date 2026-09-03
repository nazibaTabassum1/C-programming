#include <stdio.h>

int main()
{
    float salary1 = 1700.00;
    float sales1 = 1230.50;

    double salary2 = 1700.00;
    double sales2 = 1230.50;

    float total1 = salary1 + sales1 * 0.15;
    double total2 = salary2 + sales2 * 0.15;

    printf("Float  : %.20f\n", total1);
    printf("Double : %.20lf\n", total2);

    printf("\nWith 2 decimal places:\n");

    printf("Float  : %.2f\n", total1);
    printf("Double : %.2lf\n", total2);

    return 0;
}