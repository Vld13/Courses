#include<stdio.h>


int main()
{
        int num = 21;

        printf("num = %d\nnum>>2 = %d\nnum<<3 = %d\n",num,num>>2,num<<3); 
        // >> - делим число на 2^n, << - умножаем число на 2^n, (n - на скролько сдвигаем)  
        return 0;
}
