//program to find fibonacci numbers through loop method.
#include<stdio.h>
int fibo(int);  //Declaration of function fibo
int main()
{
    int i, n;
    printf("\n\t\t\tProgram to Find fibonacci series\n\t\t\tBy Vilakshan");
    printf("\n\nHow many terms you want to print : ");
    scanf("%d", &n);
    printf("\nThe Fibonacci series are : ");

    i = 1; //control variable for the loop
    while(i <= n) //Loop to print terms simultaneously
    {
        printf("\n%d : %d", i, fibo(i)); //calling fibo function
        i ++ ;//increment of control variable
    }
    return 0; //returning exit_success_status to OS.
}

int fibo(int t) //defining function fibo 
{
    if(t == 1)
    {
        return 0;
    }
    else
    {
        if(t == 2)
        {
            return 1;
        }
        else
        {
            return(fibo(t-1)+fibo(t-2));
        }
    }
}

//By vilakshan, 2213256
