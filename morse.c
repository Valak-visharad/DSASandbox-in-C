/*
morse to english and english to morse converter
*/
#include <stdio.h>
#include <string.h>
void morse(char eng[1000])
{
    int i;
    char morse[][5] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", ".", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (i = 0; i < strlen(eng); i++)
    {
        int t = eng[i];
        if (t == ' ')
            printf("  ");
        else if ((t >= 97) && (t <= 97 + 26))
            printf("%s", morse[t - 97]);
        else if ((t >= 65) && (t <= 65 + 26))
            printf("%s", morse[t - 65]);
        else
            printf("%c", t);
        printf(" ");
    }
}
void en(char arr[1000])
{
    int i = 0;
    while(i < strlen(arr))
    {
        if(arr[i] == '.'){
            if(arr[i+1] == ' '){
                printf("i");
                i++;
                break;
            }
            else if(arr[i+1] == '.'){
                if(arr[i+2] == ' '){
                    printf("i");
                    i += 2;
                    break;
                }
            }
            else if(arr[i+1] == '-'){
                //code
            }
        }
    }
}
void main()
{
    char arr[1000];
    while (1)
    {
        printf("\n>>> ");
        gets(arr);
        if ((arr[0] == '.') || (arr[0] == '_'))
            en(arr);
        else
            morse(arr);
    }
}