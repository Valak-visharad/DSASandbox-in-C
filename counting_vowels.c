#include<stdio.h>
#include<string.h>

void main()
{
    char inp[500];
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    printf("\n\n\t\tPROGRAM to count vowels on a string\n\t\tBy Vilakshan, 2213256");
    printf("\n\n\nEnter a string : ");
    gets(inp);
    for(int j = 0; j < strlen(inp); j ++)
    {
        if ((inp[j] == 'a') || (inp[j] == 'A'))
            a++;
        else if ((inp[j] == 'e') || (inp[j] == 'E'))
            e++;
        else if ((inp[j] == 'i') || (inp[j] == 'I'))
            i++;
        if ((inp[j] == 'o') || (inp[j] == 'O'))
            o++;
        if ((inp[j] == 'u') || (inp[j] == 'U'))
            u++;
    }
    printf("\n\n\tTotal vowels in given string are : %d\n\n\t\ta = %d\n\t\te = %d\n\t\ti = %d\n\t\to = %d\n\t\tu = %d", a+e+i+o+u, a, e, i, o, u);
}
