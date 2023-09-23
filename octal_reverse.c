#include<stdio.h>
long int power(int x, int y)
{ 
    long int res = 1;
    int i = 0;
    while(i < y)
    {
        res *= x;
        i++;
    }
    return res;
}
int octal(int x)
{
    //using successive division
    int rem, oct = 0, i = 0;
    while(x != 0)
    {
        rem = x % 8;
        x /= 8;
        oct += rem * power(10, i);
        i++;
    }
    return oct;
}
int odd(int x)
{
    return(x % 2);
}
int digs(int x)
{
    int dig = 1;
    while(x / 10 != 0)
    {
        x /= 10;
        dig++;
    }
    return dig;
}
int reverse(int x)
{
    int i, num = 0, dig = digs(x);
    for(i = 0; i < dig; i++)
    {
        num += (x % 10) * power(10, dig - (i+1));
        x /= 10;
    }
    return num;
}
int evendigs(int x)
{
    int evendig = 0, i, dig = digs(x);
    for(i = 0; i < dig; i++)
    {
        if((x % 10) % 2 == 0)
            evendig++;
        x /= 10;
    }
    return evendig;
}
int cond1(int x) // returns 1 if condition 1 satisfies
{
    return(evendigs(octal(x)) == evendigs(octal(reverse(x))));
}
int cond2(int x) //returns 1 if even, ie condition 2 satisfies
{
    return (1 - odd(evendigs(octal(x))));
}
void main()
{
    int x;
    scanf("%d", &x);
    if (cond1(x))
    {
        if (cond2(x))
            printf("EVEN ");
        else
            printf("ODD ");
        printf("%d", evendigs(octal(x)));
    }
    else if (cond2(x))
        printf("DIFFERENT %d %d", evendigs(octal(x)), evendigs(octal(reverse(x))));   
}
