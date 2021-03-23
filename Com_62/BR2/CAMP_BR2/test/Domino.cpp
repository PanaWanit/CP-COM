#include<bits/stdc++.h>
int form;
int a[30303];
using namespace std;
void domino(int state,int now)
{
    if(state==form)
    {
        for(int i=0;i<now;i++)
        {
            if(a[i]==1) printf("--\n");
            if(a[i]==2) printf("||\n");
        }
        printf("E\n");
        return;
    }
    if(state>form)
        return;
    a[now]=1;
    domino(state+1,now+1);
    a[now]=2;
    domino(state+2,now+1);
}
int main()
{

    scanf("%d",&form);
    domino(0,0);
}
