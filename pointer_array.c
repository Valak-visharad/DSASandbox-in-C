#include<stdio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d number : ", i+1);
        scanf("%d", &arr[i]);
    }
    int *str_arr0;
    str_arr0 = &arr[0];
    int j = 0;
    printf("\n\nInputted array : \n");
    while(j < 5)
    {
        printf("%d, ", *(str_arr0 + j));
        j++;
    }
}
