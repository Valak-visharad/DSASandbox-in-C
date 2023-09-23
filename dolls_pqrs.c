/*
In a shop, there are 4 dolls of different heights P,Q,R and S. S is neither as tall as P 
nor as short as R. Q is shorter than S but taller than R. If Kittu wants to purchase the tallest 
doll, which one should she purchase?
*/
#include<stdio.h>
int main()
{
    int height[4];
    char name[4] = "pqrs";
    //inputting the height of dolls
    int i;
    for (i = 0; i < 4; i++)  
    {
        printf("Height of doll %c : ", name[i]);
        scanf("%d", &height[i]);
    }
    //finding the tallest
    int j, tall = height[0];
    char doll = name[0];
    while (j < 4)
    {
        if (tall < height[j])
        {
            tall = height[j];
            doll = name[j]; 
        }
        j++;
    }
    printf("\nTallest doll is %c", doll);
    printf("\nwith height of %d", tall);
    return 0;
}
