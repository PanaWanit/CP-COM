/*
    TASK: Hello world(HARD)
    AUTHOR: palmy
    SCHOOL: Klaeng
    LANG: Python
*/
#include <bits/stdc++.h>
using namespace std;
struct pt
{
    int t,m,h,i;
    bool operator<(const pt&a)const {
    if(m==a.m) return i>a.i;
    return m<a.m;
    }
};
pt tmp;
priority_queue<pt > q;
int main()
{
    int n,m,h;
    char c;
    long long ans =0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &c);
        if(c == 'c')
        {
            scanf(" %c", &c);
            if(c == 'n')
            {
            scanf("%d",&m);
            tmp.m = m;
            tmp.i = i;
            tmp.t = n+10;
            tmp.h = n+10;
            q.push(tmp);
            }
            else{
            scanf("%d %d",&m,&h);
            tmp.m = m;
            tmp.i = i;
            tmp.t = i;
            tmp.h = h;
            q.push(tmp);
            }

        }
        else
        {
            while(true)
            {
                if(q.empty())
                    break;
                tmp = q.top();
                q.pop();
                if(tmp.t+tmp.h > i)
                {
                    ans += tmp.m;
                    break;
                }
                else
                {
                    int rnd = (i-tmp.t) / tmp.h;
                    for(int j=0; j < rnd; j++)
                    {
                        tmp.m /= 2;
                    }
                    tmp.t=tmp.t+tmp.h*rnd;
                    if(tmp.m>0)
                    {
                        q.push(tmp);
                    }
                }
            }
        }
    }
    printf("%lld\n",ans);
    int cnt = 0;
    while(!q.empty())
    {
        tmp = q.top();
        q.pop();
        if(tmp.t+tmp.h > n)
            cnt++;
        else
        {
            int rnd = ((n-1)-tmp.t) / tmp.h;
            for(int j=0; j<rnd; j++)
                tmp.m/=2;
            if(tmp.m>0)
                cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
/*
5
c n 100
c r 58 2
u
u
c r 1 1
*/
