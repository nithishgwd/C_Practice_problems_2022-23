#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "declaration.h"


int main()
{
    //1. convert a binary number to decimal and vice versa
    printf("\n1. convert a binary number to decimal and vice versa.\n");
    printf("\n1a. Binary to decimal");
    binary_to_decimal();


    printf("\n\n1b. decimal to binary");
    decimal_to_binary(1);

    printf("\n2. sequence of numbers such that every number in the sequence is the sum of the previous three numbers.");
    sumOfPreviousThree();

    sketch();

}
