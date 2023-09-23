#include<stdio.h>
void print_students(char *pA, char *ps, int n)
{
    for (int i = 0; i < n; i++)
        printf("%c ", *(pA + i));
}
void read_students(char *pA, char *ps, int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        char tmp;
        scanf(" %c", &tmp); //provided with space to take input like-wise
        *(pA + i) = tmp;
        if (tmp >= 'N')
            *(ps + i) = tmp - 13;
        else
            *(ps + i) = tmp;
    }
}
void arrange_students(char *pA, char *ps, int n) //bubble sort
{
    char tmp; //tmp character used in sorting
    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (*(ps + j) > *(ps + j + 1))
            {
                tmp = *(pA + j + 1); 
                *(pA + j + 1) = *(pA + j);
                *(pA + j) = tmp;
                tmp = *(ps + j + 1);
                *(ps + j + 1) = *(ps + j);
                *(ps + j) = tmp;
            }
        }
    }
}
void list_students(char *ps, int n, int g)
{
    int passed = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(ps + i) == 64 + g)
        {
            passed = 1;
            printf("%d ", i + 400);
        }
        else if ((i == n - 1) && (passed == 0))
            printf("-1");
    }
}
void main()
{
    int g, n;
    char A[100000], S[100000]; 
    /* 
    S will be companion loop that will contain original group nos of A and will HELP him in SORTING
    */
    while(1)
    {
        char a = getchar();
        if (a != 't')
        {
            if (a == 'r')
            {
                scanf("%d", &n);
                read_students(&A[0], &S[0], n);
            }
            else if (a == 'p')
            {
                print_students(&A[0], &S[0], n); 
            }
            else if (a == 'a')
            {
                arrange_students(&A[0], &S[0], n);
            }
            else if (a == 'l')
            {
                scanf(" %d", &g);
                list_students(&S[0], n, g);
            }
        }
        else
        {
            break;
        }
    }
}
