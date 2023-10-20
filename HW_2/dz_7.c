#include<stdio.h>


int main()
{
        int bin = 111001101;
        int dec = 0;
        int i;

        printf("bin = %d\n",bin);
        
        for(i=1;bin;bin/=10,i*=2)
        {
                dec += i*(bin%10);
                //printf("dec = %d\n",dec);
        }

        printf("dec = %d\n",dec);
        
        return 0;
}
