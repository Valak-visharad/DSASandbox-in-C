#include<stdio.h>

struct TIME
    {
        int hour, minute;
    };
struct day
{
    int date;
    struct TIME time;
    char day[10];
}; struct day d[7];

void main()
{
    for(int i = 0; i < 7; i++)
    {
        printf("\n\t\tDate : ");
        scanf("%d", &d[i].date);

        printf("\n\t\tDay : ");
        scanf("%s", &d[i].day);

        printf("\n\t\t\thour : ");
        scanf("%d", &d[i].time.hour);

        printf("\n\t\t\tminute : ");
        scanf("%d", &d[i].time.minute);
    }

    for(int j = 0; j < 7; j++)
    {
        printf("%d", &d[j].date);

        printf("%s", &d[j].day);

        printf("%d", &d[j].time.hour);

        printf("%d", &d[j].time.minute);
    }
}
