
#include <stdio.h>
/*int sum(int, int);
int diff(int, int);
int prod(int, int);
int quotient (int, int);
int rem(int, int);
float divi(float, float);
*/

int sum (int a, int b){
    return (a + b);
}

int diff (int a, int b){
    return (a > b)?(a - b):(b - a);
}

int prod (int a, int b){
    return (a * b);
}

int quotient  (int a, int b){
    return (a / b);
}

double rem (int a, int b){
    return (a % b);
}

float divi(float a, float b){
    return (a / b);
}


void main (){
    int n1, n2;
    printf("\n\n\t\tProgram by vilakshan\n\nEnter first number : ");
    scanf("%d", &n1);
    printf("\nEnter second number : ");
    scanf("%d", &n2);
    printf("\n\n\tSum : %d\n\n\tDifference : %d\n\n\tProduct : %d\n\n\tQuotient(n1/n2) : %d\n\n\tRemainder(n1/n2) : %lf\n\n\tDivision(n1/n2) : %f", sum(n1, n2), diff(n1, n2), prod(n1, n2), quotient(n1, n2), rem(n1, n2), divi(n1, n2));
}
