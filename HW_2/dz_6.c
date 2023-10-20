#include<stdio.h>


int main()
{
        int input_seconds = 49910;
        int hour = 0;
        int minute = 0;
        int second = 0;

        hour = input_seconds/3600;
        minute = input_seconds/60%60;
        second = input_seconds%60;

        printf(" %d:%d:%d\n",hour,minute,second);
        return 0;
}





