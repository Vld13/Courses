#include<stdio.h>

int main()
{
        int a = -781;
        int b = 906123;
        printf("Old: a = %d, b = %d\n",a,b);

        a ^= b; 
        b ^= a;
        a ^= b;
        printf("New: a = %d, b = %d\n",a,b);

        return 0;
}
