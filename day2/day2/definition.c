#include "declaration.h"
#include<stdio.h>
#include<math.h>

int sum_of_digit(int digit)
{
    int sum=0,mod;
    while(digit>0)
    {
        mod=digit%10;
        sum=sum+mod;
        digit=digit/10;
    }
    return sum;

}

int reverse_of_num(int digit)
{
    int rev=0,mod;
    while(digit>0)
    {
        mod=digit%10;
        rev=rev*10+mod;
        digit/=10;
    }
    return rev;
}

int occurance_of_digit(int num,int digit)
{
    int tnum=num,mod,cnt=0;
    while(tnum>0)
    {
        mod=tnum%10;
        if(mod==digit)
            cnt++;
        tnum/=10;
    }
    return cnt;
}

int palindrome_of_num(int num)
{
    int mod,rev=0;
    while(num>0)
    {
        mod=num%10;
        rev=rev*10+mod;
        num/=10;
    }
    return rev;
}

int prime_num(int num)
{

    if(num==1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                return 0;
            }
        }return 1;
    }
}

int get_first_n_prime_number(int num)
{
    if(num>0)
    {
        int count=0;
        int n=1;
        printf("\n first %d prime number:",num);
        while(count<num)
        {
            //print if number is prime number
            if(prime_num(n))
            {
                printf("%d",n);
                count++;
            }
            n++;
        }
        return 1;

    }
    else
    {
            return -1;
    }
}
