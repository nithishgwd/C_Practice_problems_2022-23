#include <stdio.h>
#include "declaration.h"

int binary_to_decimal()
{
    int binary_num;
    printf("\nEnter Binary number : ");
    scanf("%d",&binary_num);
    int decimal_num=0;
    int mod_rem=0,base=1;

    if(binary_num>=0)
    {
        while(binary_num>0)
        {
            mod_rem=binary_num%10;
            if(mod_rem>1)
            {
                return INVALID;
            }
            decimal_num = decimal_num+mod_rem*base;
            base = base*2;
            binary_num=binary_num/10;
        }printf("\n\tConverted decimal number in binary : %d",decimal_num);
        return 1;


    }
    else
    {
        return INVALID;
    }
}

int decimal_to_binary(int decimal)
{
    int mod_rem=0,i=0;
    int array[20];
    printf("\nEnter decimal number : ");
    scanf("%d",&decimal);
    if(decimal!=0)
    {
        while(decimal!=0)
        {
            mod_rem=decimal%2;
            decimal=decimal/2;
            array[i]=mod_rem;
            i++;

        }
        printf("\n\tbinary number of given decimal : ");
        for(int j=i-1;j>=0;j--)
        {
            printf("%d",array[j]);
        }return 0;
    }
    else
    {
        return INVALID;
    }
}

int sumOfPreviousThree()
{
    int sequenceLength;
    //Getting 1st three input numbers
    printf("\nEnter the required sequence : ");
    scanf("%d",&sequenceLength);
    int array[sequenceLength];

    int first,second,third;
    printf("Enter the 1st sequence : ");
    scanf("%d",&first);
    printf("Enter the 2nd sequence : ");
    scanf("%d",&second);
    printf("Enter the 3rd sequence : ");
    scanf("%d",&third);

    array[0]= first;
    array[1]=second;
    array[2]=third;
    printf("\n\tsequence : %d %d %d",first,second,third);
    for(int i=3;i<sequenceLength;i++)
    {
        array[i]=array[i-3]+array[i-2]+array[i-1];
        printf(" %d",array[i]);
    }
}

int sketch()
{
    int rows;
    int blankSpace=0;
    printf("\n\nEnter number of rows : ");
    scanf("%d",&rows);
    if(rows>0)
    {
        for(int i=rows;i>0;i--)     // go to next line after each line executed
        {
            blankSpace=rows-i;      //calculate blank space of that line
            for(int j=i;j>0;j--)    //execute each row with "*" and blankspace
            {
                while(blankSpace>0)
                {
                    printf(" ");
                    blankSpace--;
                }
                printf("*");
            }
            printf("\n");

        }
    }
}
