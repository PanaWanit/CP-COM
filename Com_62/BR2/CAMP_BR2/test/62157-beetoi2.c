#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=1,b=0,all,aa=0,bb=0;
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==-1) break;
        else
        {
            for(int i=1;i<=x;i++)
            {
                aa=a;
                a=a+b+1;
                b=aa;
                all=a+b+1;

            }
            printf("%d %d\n",a,all);
            aa=0,a=1,b=0,all=0;

        }
    }
    return 0;
}
