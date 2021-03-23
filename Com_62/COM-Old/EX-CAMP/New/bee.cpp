#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w=1,all=0,s=0,a=0;
    while(1)
    {
        int y;
        scanf("%d",&y);
        if(y==-1) break;
        while(y--)
        {

            a=w;
            w=w+s+1;
            s=a;
            all=w+s+1;
        }
        printf("%d %d\n",w,all);
        w=1,all=0,s=0,a=0;
    }


    return 0;
}
