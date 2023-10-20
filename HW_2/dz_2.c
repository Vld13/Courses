#include<stdio.h>

int main()
{
        int res;
        int x;
        int a=100,b=1,c=1,d=1,e=1,f=1,h=1;
        x = a/(b*(c/(d*(e/(f*h)))));
        printf("res = %d\n",res);
        return 0;
}
