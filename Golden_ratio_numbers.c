#include<stdio.h>

int main()
{
    int n = 100;
    float is[n], js[n];
    for(float i = 1; i < n; i++)
    {
        for(float j = 1; j < i; j++)
        {
            float ord1 = ("%.1f", (i + j) / i);
            float ord2 = ("%.1f", i / j);
            if("%.3f" == "%.3f", ord1, ord2)
                printf("<<<<<<FOUND A GOLDEN RATIO PAIR>>>>>>\n");
            printf("%.2f, %.2f = %.3f, %.3f\n", i, j, ord1, ord2);
            
        }
    }
}
