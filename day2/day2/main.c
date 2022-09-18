#include <stdio.h>
#include <stdlib.h>
#include "declaration.h"
#include <assert.h>

int main()
{
        assert(sum_of_digit(12345)==15);
        assert(reverse_of_num(12345)==54321);
        assert(occurance_of_digit(12311,1)==3);
        assert(palindrome_of_num(1234321)==1234321);
        //assert(palindrome_of_num(12343211)==1234321);
        //assert(first_n_prime_num(5)==);

        printf("\n\n Get first N prime numbers. \n");
        assert(get_first_n_prime_number(5)==1);
        //printf(first_n_prime_num(5));


}
