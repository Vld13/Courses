#include<stdio.h>

int main()
{
        int second_of_day = 30780;
        int hours;
        int minutes;

        minutes = second_of_day/60%60; // %60 - find part of hour
        hours = second_of_day/3600;

        printf("%d:%d\n",hours,minutes);
        
        return 0;
}
