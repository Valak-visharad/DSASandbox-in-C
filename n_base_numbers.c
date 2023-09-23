#include<stdio.h>
//Binary to decimal

int pow2(int a, int b)
{
    int result = 1;
    for(int i = 0; i < b; i++)
    {
        result = result * a;
    }
    return (result);
}
int basen_2_decimal(int binary, int n)//n represents base nx6789
{
    int decimal = 0;
    for(int i = 0; i < 11; i++)
    {
        int kam_ka_digit = binary / pow2(10, 9 - i); //extracting quotient as kam_ka_digit
        decimal += pow2(n, 9 - i) * (kam_ka_digit);
        binary = binary % pow2(10, 9 - i); //updating next divident as remainder of last division
    }
    return (decimal);
}

void main()
{
    int base_n, n;
    printf("Enter base : ");
    scanf("%d", &n);
    printf("Enter the number upto ten digits : ");
    scanf("%d", &base_n);
    printf("decimal representation of given binary number is : %d", basen_2_decimal(base_n, n));
}
