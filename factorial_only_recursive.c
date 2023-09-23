#include<stdio.h>

long int fact(long int);

void main()
{
    long int n;
    printf("\n\nEnter a number : ");
    scanf("%li", &n);
    printf("\n\nfactorial of %li is %li\n\n", n, fact(n));
}

long int fact(long int a)
{
    if (a <= 1)
        return 1;
    else 
        return fact(a - 1) * a ;
}
