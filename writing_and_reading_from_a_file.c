/*
Write a C program to demonstrate basic file handling operations 
i) open a text file in a write mode 
ii) Write some contents to file 
iii) display file contents on screen  
*/
#include<stdio.h>
#include<string.h>
void main()
{
    FILE *file_1 = fopen("C:\\speed\\Desktop\\testfile.txt","w+");
    char data_i[100];
    printf("Enter the data to be inputted to file : ");
    gets(data_i);
    fprintf(file_1, data_i);
    fseek(file_1, 0, SEEK_SET);
    printf("\n\nData in file : \n-----\n");
    while (1)
    {
        char ch;
        ch = fgetc(file_1);
        if (ch == EOF)
            break;
        else
            printf("%c", ch);
    }
    printf("\n-----");
    fclose(file_1);
}
