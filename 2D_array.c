/* Taking 2D array input */

#include <stdio.h>
int main()
{
    int i, j, size;
    printf("how many entries : ");
    scanf("%d", &size);
    int data[size];
    for (i = 0; i <= size - 1; i++)
    {
        printf(">");
        scanf("%d", &data[i]);
        if(data[i] == 0)
        {
            break;
        }
    }
    printf("\n\n\nEntries till are : \n\tRoll no.\t\tName\t\tClass\n");
    for(j = 0; j <= size - 1; j++)
    {
        printf("\t%d\t", data[j]);
        /*for (j = 1; j <= 3; j++)
        {ṇ
            printf("\t%s\t", data[i][j]);
        }
        */
    printf("\n");
    }
    return 0;
}
