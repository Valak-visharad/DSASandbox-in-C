/*
addition and subtraction of matrices using 
pointers, arrays and functions
*/
#include<stdio.h>
//#include<conio.h>
void add(int *m1, int *m2, int *r, int m, int n)
{
    int res[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            *(r + i * n + j) = *(m1 + i * n + j) + *(m2 + i * n + j);
}
void sub(int *m1, int *m2, int *r, int m, int n)
{
    int res[m][n];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
            *(r + i * n + j) = *(m1 + i * n + j) - *(m2 + i * n + j); 
}
void output(int *x, int m, int n)
{
    for(int i = 0; i < m; i++)
    {
        printf("\t\t| ");
        for(int j = 0; j < n; j++)
        {
            printf("\t");
            printf("%d  ", *(x + i * n + j));
        }
        printf(" |\n\n");
    }
}
void mat_prompt(char name[7], int m, int n, int x, int y, int *arr) //m, n are rows and columns of matrix and x, y are current parameters
{
    //clrscr();
    printf("\n[%s]\n\n", name);
    for(int i = 0; i < m; i++)
    {
        printf("\t\t| ");
        for(int j = 0; j < n; j++)
        {
            printf("\t");
            if (i * n + j < x * n + y)     //MAKING CHANGES
                printf("# ");//, *(arr + n * i + j));
            else if(i == x && j == y)
                printf("?  ");
            else
                printf("_  ");
        }
        printf(" |\n\n");
    }
    printf("? = ");
}
void input(char name[7], int *a, int m, int n, int *res) 
{
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            mat_prompt(name, m, n, i, j, res);
            scanf("%d", (a + i * n + j));
        }
}
void main()
{
    int m, n;
    printf("No. of rows : ");
    scanf("%d", &m);
    printf("No. of columns : ");
    scanf("%d", &n);
    int m1[m][n], m2[m][n], res[m][n], *a, *b;
    a = *m1;
    b = *m2;
    input("mat.1", a, m, n, &res[0][0]);
    printf("\n\n");
    input("mat.2", b, m, n, &res[0][0]);
    printf("\n\n\nAddition of matrices : \n\n");
    add(a, b, &res[0][0], m, n);
    output(&res[0][0], m, n);
    printf("\n\n\nSubraction i.e. mat_1 - mat_2 : \n\n");
    sub(a, b, &res[0][0], m, n);
    output(&res[0][0], m, n);
}
