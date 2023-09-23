/* program to find hardy-ramanujan numbers*/

#include<stdio.h>
void hr(int a)
{
    int m = 0, n = 0, x = 0, y = 0;
    for(int i = 1; i <= a / 100; i++)
    {
        for(int j = 1; j <= a / 100; j++)
        {
            if((i * i * i) + (j * j * j) == a)
            {
                if ((i != a) && (i != b))
                {
                    if ((j != a) && (j != b))
                    {
                        hr(a, i, j);
                    }
                }         
            }                   
        }
    }

}

int main()
{
    int num;
    printf("Enter the starting number : ");
    scanf("%d", &num);
    while(1)
    int k = 0;
    {
        hr(k);
        printf(k);
        k += 1;
    }
    return 0;
}
