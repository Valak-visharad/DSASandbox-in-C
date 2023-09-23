#include<stdio.h>

long int fact(int n)
{
    int ans = 1;
    if (n == 0)
        return 1;
    else
        while(n >= 1)
        {
            ans *= n;    
            n -= 1;
        }
    return ans;
}

void main()
{
    int a;
    printf("number : ");
    scanf("%ld",&a);
    printf("factorial : %ld", fact(a));
}
