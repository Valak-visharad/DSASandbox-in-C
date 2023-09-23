#include<stdio.h>
void main()
{
    int a = 12, b = 14, *ptra = &a, *ptrb;
    ptrb = &b;
    printf("a = %d\n&a = %d\nptra = %d\n*ptra = %d\n\nb = %d\n&b = %d\nptrb = %d\n*ptrb = %d\n", a, &a, ptra, *ptra, b, &b, ptrb, *ptrb);
}