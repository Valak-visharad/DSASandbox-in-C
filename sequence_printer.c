#include<stdio.h>
int expo(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
        res *= x;
    return res;
}
void start_count(int *arr, int a, int n) //strictly_provides_START_COUNT
{
    for(int i = 0; i < a; i++)
        *(arr + i) = 0;
}
void add_1(int *x, int a, int n) //incrementor of n-base no., a-digit no. // yet to debug
{
    int i = 0;
    *(x + a - i - 1) += 1;
    while(*(x + a - i - 1) == n)
    {
        *(x + a - i - 1) = 0;
        *(x + a - 2 - i) += 1;
        i++;
    }
}

int check_repeat(int *count, int current, int rep_flag)
{
    if (rep_flag == 1)
        return 1; // sequence allowed to print
    else // CHECKING FOR NON-REPETITIVE SEQUENCES
    {
        int index = 0, found = 1;
        int copy[current];
        for (int i = 0; i < current; i++) 
        {
            for (int j = 0; j < index; j++) {
                if (copy[j] == *(count + i))
                    return 0; // WONT PRINT
            }
            copy[index++] = *(count + i);
        }
    }
    return 1;
}
int main()
{
    int n, a, b, rep_flag;
    printf ("\n\t\t\tSequences\n\t\tAuthor : Vilakshan, 2213256\n\n");
    printf (">>> no of total elements : ");
    scanf ("%d", &n);
    printf (">>> Minimum no. of elements in a sequences : ");
    scanf ("%d", &a);
    printf (">>> Maximum no. of elements in a sequences : ");
    scanf ("%d", &b);
    printf (">>> Allow repitition ?(1/0) : ");
    scanf ("%d", &rep_flag);
    printf ("\nMaximum possible sequences : "); 
    int tp[b - a + 1];
    tp[0] = 0; // will hold total sum;
    for(int i = a; i <= b ; i ++) {
        tp[i + 1] = expo(n, i);
        tp[0] += tp[i + 1];
    }
    printf ("%d", tp[0]);
    int s;
    printf ("\nMaximum length of a single unit : ");
    scanf ("%d", &s);
    char element[n][s + 1]; //adding 1 to leave space
    printf ("\nEnter Elements : \n");
    getchar(); //to avoid adding empty line to string
    for (int i = 0; i < n; i++)
    {
        printf ("%d : ", i + 1);
        gets(element[i]);
    }
    for (int i = a; i <= b; i++)
    {
        int count[i];
        start_count(&count[0], i, n);

        printf ("\n\nstart no. : "); //debugger
        for (int j = 0; j < i; j++)
            printf ("%d - ", count[j]);
        int spacer = 0;
        for (int j = 0; j < tp[i + 1]; j++)
        {
            if (check_repeat(&count[0], i, rep_flag)) {
                for (int k = 0; k < i; k++)
                    printf ("%s", element[count[k]]);
                if (spacer++ % 5 == 0)
                    printf ("}\n{");
                else
                    printf("}\t\t{");
            }
            add_1(&count[0], i, n);
        }
        printf("\nTOTAL SEQUENCES = %d", spacer);
    }
    return 0;
}
