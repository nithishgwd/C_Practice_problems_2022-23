#include <stdio.h>
#include <stdlib.h>
#include "declaration.h"
#include <assert.h>

int main()
{
        printf("\n1. Enter a 5 digit number and find the sum of its digits.\n");
        printf("\tProgram is executed in assertion\n");
        assert(sum_of_digit(12345)==15);

        printf("\n2. program to reverse the number.\n");
        printf("\tProgram is executed in assertion\n");
        assert(reverse_of_num(12345)==54321);

        printf("\n3. program to count the occurrences of digit in a number.\n");
        printf("\tProgram is executed in assertion\n");
        assert(occurance_of_digit(12311,1)==3);

        printf("\n4. check if a given number is a palindrome. For e.g. 12321, 56788765.\n");
        printf("\tProgram is executed in assertion\n");
        assert(palindrome_of_num(1234321)==1234321);


        printf("\n5. Get first N prime numbers. \n");
        get_first_n_prime_number();


        printf("\n\n6. C program to display and find the sum of the series 1+11+111+....111 up to n.\n");
        to_find_sum_series();

        printf("\n7. program that asks the user to enter a number and returns if it is Armstrong or not.\n");
        check_Armstrong();

        printf("\n8. C program to check that the input pair of numbers is amicable.\n");
        amicable_numbers();

        printf("\n9. menu driven program to read two integers & find their sum, difference & product.\n");
        menu_driven();

        printf("\n10. program to calculate the volume of the following shapes: Cube, Cuboid, Sphere, Cylinder and Cone.\n");
        volume_of_shapes();

        printf("\n11. Program to read no of unit consumed and print out total charge amount.\n");
        electricity_rate();
}
