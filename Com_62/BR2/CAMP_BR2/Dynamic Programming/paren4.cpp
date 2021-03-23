#include<bits/stdc++.h>
using namespace std;
int n;
char a[30];
char ans[5000000][30];
int cnt;
void play(int state,int open,int close)
{
    if(state==2*n)
    {
        int i;
        for(i=0;i<2*n;i++)
            ans[cnt][i]=a[i];
        cnt++;
        return;
    }
    if(open<n)
    {
        a[state] = '(';
        play(state+1,open+1,close);
    }
    if(close<open)
    {
        a[state]=')';
        play(state+1,open,close+1);
    }
}
int main()
{
    int i,j;
    scanf("%d",&n);
    play(0,0,0);
    printf("%d\n",cnt);
    for(i=0;i<cnt;i++)
    {

    printf("%s\n",ans[i]);
    }
}
