//Swapping integers, vilakshan, 2213256
#include<stdio.h>
void swap1(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void swap2(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int num1, num2;
    printf("Number 1 : ");
    scanf("%d", &num1);
    printf("Number 2 : ");
    scanf("%d", &num2);
    int *ptr1 = &num1, *ptr2 = &num2;
    //swap1(ptr1, ptr2);
    swap2(ptr1, ptr2);
    printf("\n\nSwapped values- \n\t\tnum1 : %d\n\t\tnum2 : %d", num1, num2);
    return 0;
}
