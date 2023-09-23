#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
    char str[] = "Let it burn", final[] = ", and it will burn";
    printf("%s", str);
    getchar();
    clrscr();
    printf("\n\n\n%s", strcat(str, final));
    return 0;
}
