/*
So questions is : create a program to convert a decimal number x into any N base number 

Input method:
A single line of input conatining x and N separated by space
x N

Output: 
A single integer converted into N Base
Number 

Constraints :
0 <= x <= 10,000
1<= N <= 35 

(For N more than 10, use alphabet)
*/
#include<stdio.h>
void print_v(int *x)
{
    int first_non_zero = 0;
    for (int i = 15; i >= 0; i--)
    {
        if (*(x + i) == 0 && first_non_zero == 0)
            continue;
        else
        {
            first_non_zero = 1;
            if (*(x + i) < 10)
                printf("%d", *(x + i));
            else 
                printf("%c", 65 - 10 + *(x + i));
        }
    }
}

void convert(int x, int n, int *arr)
{
    for (int i = 0; i < 16; i++)
    {
        *(arr + i) = x % n;
        x /= n;
    }
}

int main()
{
    int x, N;
    int arr[16];
    scanf("%d %d", &x, &N);
    convert(x, N, arr);
    print_v(arr);
    return 0;
}
