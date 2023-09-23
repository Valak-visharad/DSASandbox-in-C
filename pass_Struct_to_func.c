#include<stdio.h>
typedef struct dist
{
    int feet, inch;
}distance;
void add(distance d1, distance d2, distance *d3)
{
    d3->feet = d1.feet + d2.feet;
    d3->inch = d1.inch + d2.inch;
}
void main()
{
    distance arr[2], b, *bptr = &b;
    for(int i = 0; i < 2 ; i++)
    {
        printf("\t%d\n\tFeet : ", i+1);
        scanf("%d", &arr[i].feet);
        printf("\tInches : ");
        scanf("%d", &arr[i].inch);
    }
    add(arr[0], arr[1], bptr);
    printf("\nsum of given values-\n\tfeet : %d\n\tInches : %d", (*bptr).feet, bptr->inch);
}
