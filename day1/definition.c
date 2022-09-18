#include<stdio.h>
#include<math.h>
#define INVALID -1
#define PI 3.14


//1. program that converts upper case to lower case.
char upper_lower_case(char upper)
{
    if(upper>=65&&upper<=90)             //ASCII value of 'A' is 65..up to...'Z' is 90
    {
        return upper+32;
    }
    else if(upper>=97&&upper>=122)       //ASCII value of 'a' is 97..up to...'z' is 122
    {
        return upper;
    }
    else
    {
        return INVALID;
    }
}

//2. program to calculate the area of circle.
float area_of_cricle(float radius)
{
    float area;
    printf("\nEnter radius of circle : ");
    scanf("%f",&radius);
    if(radius>0)
    {
        area=PI*radius*radius;
        printf("\n\tArea of circle = %.2f\n",area);
        return 1;
    }
    else
    {
        return INVALID;
    }
}

//3. program to calculate simple and compound interest.
float simple_compount_interest(float principal,float time,float rate_of_interest)
{
    float simple_interest,compound_interest;
    int n_compound;
    printf("Enter Principal amount                                   : ");
    scanf("%f",&principal);
    printf("Enter time period                                        : ");
    scanf("%f",&time);
    printf("Enter rate of interest                                   : ");
    scanf("%f",&rate_of_interest);
    printf("Enter number of times interest is compounded total years : ");
    scanf("%d",&n_compound);

    simple_interest=(principal*time*(rate_of_interest/100));                                               // SI = P*T*R formula to calculate simple interest
    compound_interest=(principal*(pow(1+((rate_of_interest/100)/n_compound),n_compound*time)))-principal;  // CI = (P(1+R/n)^nt))-P formula to calculate compound interest
    printf("\n\tsimple interest calculated = %.2f",simple_interest);
    printf("\n\tsimple interest calculated = %.2f\n",compound_interest);
    return 1;

}

//4. program to convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius.
float celsius_fahrenheit()
{
    float c,fahrenheit;
    printf("Enter Celsius to be converted in Fahrenheit : ");
    scanf("%f",&c);

    fahrenheit=(9/5)*c+32;                                               //Formula to convert Celsius to Fahrenheit
    printf("\n\tConverted Celsius in Fahreheit = %.2fF\n",fahrenheit);
    return 0;
}


//5. entered number is even or odd.
int even_odd(int num)
{
    if(num%2==0)
    {
        return 1;                                                     //defined function, if its even it return EVEN(1)
    }
    else
    {
        return 2;                                                    //if its odd it return ODD(2)
    }

}

//6. Entered year is leap year or not.
int leap_year(int year)
{
    while(year>0)
    {
        if(year%4==0||((year%100==0)&&(year%400==0)))
           {
               return 1;
           }
        else
            {
               return 2;
            }
    }return 0;
}

//7. find power of 2^N using left shift operator.
int power_of_2(int n)
{
    if (n >= 0)
    {
        return 1 << n;
    }
    else
    {
        return INVALID; // Return INVALID if number is negative.
    }
}
