#include<stdio.h>
void main()
{
    int a[17];
    for(int i = 0; i < 17; i++)
    {
        a[i] = 3;
    }
    printf("0\t %d\n", a[0]);
    printf("1\t %d\n", ++a[1]);
    printf("2\t %d\n", a[2]++);
    printf("3\t %d %d\n", ++a[3], a[3]);
    printf("4\t %d %d\n", a[4], ++a[4]);
    printf("5\t %d %d\n", a[5]++, a[5]);
    printf("6\t %d %d\n", a[6], a[6]++);
    printf("7\t %d %d\n", ++a[7], a[7]++);
    printf("8\t %d %d\n", a[8]++, ++a[8]);
    printf("9\t %d %d %d\n", ++a[9], a[9], a[9]++);
    printf("10\t %d %d %d\n", ++a[10], a[10]++, a[10]);
    printf("11\t %d %d %d\n", a[11], ++a[11], a[11]++);
    printf("12\t %d %d %d\n", a[12], a[12]++, ++a[12]);
    printf("13\t %d %d %d\n", a[13]++, a[13], ++a[13]);
    printf("14\t %d %d %d\n", a[14]++, ++a[14], a[14]);
    printf("15\t %d %d %d %d\t%d\n", ++a[15], ++a[15], ++a[15], ++a[15], a[15]);
    printf("16\t %d %d %d %d\t%d\n", a[16]++, a[16]++, a[16]++, a[16]++, a[16]);
}