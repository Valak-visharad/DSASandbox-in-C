/*
If a five-digit number is input through the keyboard
write a program to print a new number by adding one to each of its digits. 
For example, if the number that is input is 12391 then the output should be displayed as 23402.
*/
#include <stdio.h>
void main(){
    char num_i[5], num_f[5];
    printf("\n\t\tConceptual question\n\t\tAuthor : Vilakshan\n\n");
    printf("\tEnter a 5-dgiit number : ");
    for (int i = 0; i < 5; i++)//scanning, processing done in single code
    {
        num_i[i] = getchar();
        if (num_i[i] == '9')
            num_f[i] = '0';
        else
            num_f[i] = num_i[i] + 1;
        printf("%c", num_f[i]);
    }
}
