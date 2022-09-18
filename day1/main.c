#include <stdio.h>
#include <stdlib.h>
#include "declaration.h"
#include<assert.h>

int main()
{
    printf("\n1. program that converts upper case to lower.");
    printf("\n\tProgram is executed in assertion\n");
    assert(upper_lower_case('A')=='a');

    printf("\n2. program to calculate the area of circle.");
    area_of_cricle(1);

    printf("\n3. program to calculate simple and compound interest.\n");
    simple_compount_interest(1,1,1);

    printf("\n4. program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius.\n");
    celsius_fahrenheit();

    printf("\n5. program to find entered number is even or odd.\n");
    printf("\n\tProgram is executed in assertion\n");
    assert(even_odd(2323)==ODD);
    assert(even_odd(44)==EVEN);

    printf("\n6. Check if entered year is leap year or not.\n");
    printf("\n\tProgram is executed in assertion\n");
    assert(leap_year(1997)==NOT_LEAP_YEAR);
    assert(leap_year(2012)==LEAP_YEAR);
    assert(leap_year(2000)==LEAP_YEAR);

    printf("\n7. find power of 2^N using left shift operator.");
    printf("\n\tProgram is executed in assertion\n");
    assert(power_of_2(2)==4);
    assert(power_of_2(4)==16;
}
