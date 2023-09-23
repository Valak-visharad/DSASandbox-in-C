//fibonacci in iteration
#include<stdio.h>
void main()
{
    int n, a = 1, b = 0, c;
    printf("Upto how many terms you want fibonacci series : ");
    scanf("%d", &n);
    printf("0, ");
    for(int i=1 ; i < n ; i++)
    {
        printf("%d, ", a);
        c = a;
        a += b;
        b = c;      
    }
}
