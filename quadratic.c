#include<stdio.h>
#include<math.h>

void main()
{
    float a, b, c;
    printf("Enter the coefficient of x2 : ");
    scanf("%f", &a);
    printf("\tCoefficient of x : ");
    scanf("%f", &b);
    printf("\tconstant term : ");
    scanf("%f", &c);
    float d = powf(b, 2) - 4 * a * c; 
    if (d >= 0)
    {
        float z1 = (-b + sqrtf(d) / 2 * a;
        float z2 = (-b - sqrtf(d) / 2 * a;
        printf("\nZeroes of given equation (%fx2 + (%f)x + %f) are : %f, %f", a, b, c, z1, z2);
    }
       
}
