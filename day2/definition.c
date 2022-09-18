#include "declaration.h"
#include<stdio.h>
#include<math.h>
#define PI 3.14


//Enter a 5 digit number and find the sum of its digits.
int sum_of_digit(int digit)
{
    int sum=0,mod;
    while(digit>0)
    {
        mod=digit%10;                          //get last digit of number
        sum=sum+mod;
        digit=digit/10;                       //eliminating last digit of number using int
    }
    return sum;

}

//program to reverse the number.
int reverse_of_num(int digit)
{
    int rev=0,mod;
    while(digit>0)
    {
        mod=digit%10;
        rev=rev*10+mod;                       //Taking last digit and multiplying it with 10's unit
        digit/=10;
    }
    return rev;
}

//program to count the occurrences of digit in a number.
int occurance_of_digit(int num,int digit)
{
    int tnum=num,mod,cnt=0;
    while(tnum>0)
    {
        mod=tnum%10;
        if(mod==digit)                        //if digit repeat, will get count 'cnt++'
            cnt++;
        tnum/=10;
    }
    return cnt;
}

//check if a given number is a palindrome. For e.g. 12321, 56788765
int palindrome_of_num(int num)
{
    reverse_of_num(num);                      //using previous function reverse of a number
    return num;
}

//first 'N' prime numbers. For Eg. If N=5 then 2,3,5,7,11
int prime_num(int num)
{
    if(num==1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i<=num/2;i++)         //(num/2)-- out of any factor one must present in half of that number
        {
            if(num%i==0)
            {
                return 0;
            }
        }return 1;
    }
}

int get_first_n_prime_number()
{
    int num;
    printf("Enter 1st N prime number required : ");
    scanf("%d",&num);
    if(num>0)
    {
        int count=0;
        int n=1;
        printf("\n\tfirst %d prime number : ",num);
        while(count<num)
        {
            //print if number is prime number
            if(prime_num(n))
            {
                printf("%d ",n);
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


//C program to display and find the sum of the series 1+11+111+....111 up to n.
int to_find_sum_series()
{
    int n;
    printf("Enter required series of n : ");
    scanf("%d",&n);
    if(n>0)
    {
        int series=0,sum_series=0;
        for(int i=0;i<n;i++)
        {
            series=series*10+1;                      //building element of series one by one
            sum_series=sum_series+series;            //adding the each element up to n
        }
        printf("\n\tsum of %d series = %d\n",n,sum_series);
        return sum_series;
    }
    else
    {
        return -1;
    }
}


//program that asks the user to enter a number and returns if it is Armstrong or not

int digits_of_Armstrong(int num)        //finds number of digit present in given number
{
    int count=0;
    if(num>0)
    {
        while(num>0)
        {
            num/=10;
            count++;
        }
    }
    return count;
}


int check_Armstrong()                                            //checks weather given number is Armstrong
{
    int n;
    printf("Enter number to check, if the number is Armstrong: ");
    scanf("%d",&n);
    int armstrong=n;
    float mod,amst,sum_amst=0;
    if(n>0)
    {
        while(n>=1)
        {
            mod=n%10;
            amst=pow(mod,digits_of_Armstrong(armstrong));          // using digits of number as power for each of given given number
            sum_amst=sum_amst+amst;
            n=n/10;
        }
        if(sum_amst==armstrong)
        {
             printf("\n\t%d is Armstrong\n",armstrong);
             return 1;
        }
        else
        {
             printf("\n\t%d is not Armstrong\n",armstrong);
             return 0;
        }
    }
    else
    {
        return -1;
    }
}

//Finding sum of divisor of that number, Excluding input number
int number_divisible_by(int n)
{
    int rem,sum=0;
    for(int i=1;i<n;i++)
        {
            rem=n%i;
            if(rem==0)
            {
                sum=sum+i;
            }

        }return sum;
}

//8. C program to check that the input pair of numbers is amicable
int amicable_numbers()
{
    int n1,n2,sum1,sum2;
    printf("Enter 1st amicable pair to check: ");
    scanf("%d",&n1);
    printf("Enter 2nd amicable pair to check: ");
    scanf("%d",&n2);
    if(n1>0&&n2>0)
    {
        sum1=number_divisible_by(n1);                            //calling sum of divisor function
        sum2=number_divisible_by(n2);
        if(n1==sum2&&n2==sum1)                                   //checking n1 is equal to sum of n2 divisor and vice versa
        {
            printf("\n\tGiven pair of number is amicable\n");
            return 1;
        }
        else
        {
            printf("\tGiven pair of number is not amicable\n");
            return 0;
        }
    }
    else
    {
        return -1;
    }
}


//9. Write a menu driven program to read two integers & find their sum, difference & product
int menu_driven()
{
    int x,y,selected;
    int sum,difference,product;
    printf("Enter first numbers    : ");
    scanf("%d",&x);
    printf("Enter second numbers   : ");
    scanf("%d",&y);


    //selection of operation,required by user
    printf("\nEnter 1 for sum ");
    printf("\nEnter 2 for difference ");
    printf("\nEnter 3 for product");
    printf("\nEnter 4, if required all operation");
    printf("\nEnter your choice here              : ");
    scanf("%d",&selected);

    switch(selected)
    {
        case(1): printf("\n\t 1. Sum of numbers = %d\n",x+y);
                 break;
        case(2): printf("\n\t 2. Difference of number = %d\n",x-y);
                 break;
        case(3): printf("\n\t 3. Product of number = %d\n",x/y);
                 break;
        case(4): sum=x+y;
                 difference=x-y;
                 product=x*y;
                 printf("\n\t 1. sum of numbers=%d\n\t 2. difference of numbers=%d\n \t 3. product of numbers=%d\n",sum,difference,product);
                 break;
        default:
        printf("\n\t?????.??  Entered wrong choice,try again  ?????.??\n");
        menu_driven();
    }
    return 0;
}


//10. C program to calculate the volume of the following shapes
int volume_of_shapes()
{
    int length,width,height;
    int radius;
    int selcection;
    printf("\nEnter 1 to calculate volume Cube\n");
    printf("Enter 2 to calculate volume Cuboid\n");
    printf("Enter 3 to calculate volume Sphere\n");
    printf("Enter 4 to calculate volume Cylinder\n");
    printf("Enter 5 to calculate volume Cone\n");
    printf("\nEnter your choice here          :");
    scanf("%d",&selcection);

    switch(selcection)
    {
    case(1):
        printf("Enter length of cube            :");
        scanf("%d",&length);
        width=length;
        height=length;
        printf("\n\tVolume of cube = %d\n",cube_cuboid_volume(width,length,height));
        break;
    case(2):
        printf("Enter length of cube            :");
        scanf("%d",&length);
        printf("Enter width of cube             :");
        scanf("%d",&width);
        printf("Enter height of cube            :");
        scanf("%d",&height);
        printf("\n\tVolume of cuboid = %d\n",cube_cuboid_volume(width,length,height));
        break;
    case(3):
        printf("Enter radius of Sphere          :");
        scanf("%d",&radius);
        printf("\n\tVolume of Sphere = %f\n",sphere_volume(radius));
        break;
    case(4):
        printf("Enter radius of cylinder        :");
        scanf("%d",&radius);
        printf("Enter height of cylinder        :");
        scanf("%d",&height);
        printf("\n\tVolume of cylinder = %f\n",cylinder_volume(radius,height));
        break;
    case(5):
        printf("Enter radius of cone            :");
        scanf("%d",&radius);
        printf("Enter height of cone            :");
        scanf("%d",&height);
        printf("\n\tVolume of cone = %f\n",cone_volume(radius,height));
        break;
    default:
        printf("\n\t?????.??  Entered wrong choice,try again  ?????.??\n");
        volume_of_shapes();
    }return 0;
}

int cube_cuboid_volume(int width,int length,int height)
{
    int volume;
    volume=width*length*height;
    return volume;
}

float sphere_volume(int radius)
{
    return (4/3)*(PI*radius*radius);
}

float cylinder_volume(int radius,int height)
{
    return PI*radius*radius*height;
}

float cone_volume(int radius,int height)
{
    return PI*radius*radius*(height/3);
}


//11. C Program to read no of unit consumed and print out total charge amount
float electricity_rate()
{
    int units;
    float t_cost=0;
    printf("Enter the consumed Units, To know charges: ");
    scanf("%d",&units);

    if(units>0&&units<=200)
    {
        t_cost=units*1;
    }
    else if(units>200&&units<=300)
    {
        t_cost=200+(units-200)*1.5;
    }
    else if(units>300)
    {
        t_cost=200+150+(units-350)*2;
    }
    else
    {
        printf("\n\tEntered INVALID units consumed, try again\n\n");
        electricity_rate();
        return 1;
    }
    printf("\n\tconsumed charges for %d units is = %.2lf RS\n",units,t_cost);
    return 0;
}
