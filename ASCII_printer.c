#include <stdio.h>
//#include <time.h>
void main()
{
    printf("\t\t\t\ttASCII VALUE PRINTER\n\t\t\t\t\tAuthor : Vilakshan\n\n\t\t\tpress ENTER key till counter is 0\n");
    for (unsigned int j = 5; j < 0; j--){
        printf("%d\n", j);
        //Sleep(1000);
        getchar();
    }
    for (int i = 0; i < 1000; i++)
        printf("\t\'%c\'\t%d\n", i, i);
    printf("\nPress any key to exit...");
    getchar();
}
