#include<bits/stdc++.h>
using namespace std;
char a[30];
int main()
{
    int i,j,k;
    scanf(" %s",a+1);
    int len=strlen(a+1);
    for(k=1;k<=len;k++)
    {
        if(k==1)
            printf("..#..");
        else
        {
            if(k%3==0)
            printf(".*..");
            else
            printf(".#..");
        }
    }printf("\n");

    for(k=1;k<=len;k++)
    {
        if(k==1)
        {
            printf(".#.#.");
        }
        else
        {
            if(k%3==0)
                printf("*.*.");
            else
                printf("#.#.");
        }
    }printf("\n");
    for(k=1;k<=len;k++)
    {
        if(k==1)
            printf("#.%c.#",a[1]);
        else
        {
            if(k%3==1)
                printf(".%c.#",a[k]);
            else if(k%3==2&&len%3==2&&k==len)
                printf(".%c.#",a[k]);
            else if(k%3==2)
                printf(".%c.*",a[k]);

            else
                printf(".%c.*",a[k]);
        }
    }printf("\n");

    for(k=1;k<=len;k++)
    {
        if(k==1)
        {
            printf(".#.#.");
        }
        else
        {
            if(k%3==0)
                printf("*.*.");
            else
                printf("#.#.");
        }
    }printf("\n");

        for(k=1;k<=len;k++)
    {
        if(k==1)
            printf("..#..");
        else
        {
            if(k%3==0)
            printf(".*..");
            else
            printf(".#..");
        }
    }printf("\n");


    return 0;
}
