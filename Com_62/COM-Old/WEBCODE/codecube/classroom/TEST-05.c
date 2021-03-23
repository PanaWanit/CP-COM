#include<stdio.h>
int main()
{
    int x=0;
    while(x++!=100)
    {
        if(x%5==0)
            printf("%d\n",x);
    }

    return 0;
}
