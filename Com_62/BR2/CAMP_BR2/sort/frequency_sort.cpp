#include<bits/stdc++.h>
using namespace std;

map<int,int> mp;
struct A
{
    int number,score,index;
    bool operator<(const A&o)const
    {
        if(score>o.score) return true;
        else if(score<o.score) return false;
        return index<o.index;
    }
};
A a[1100];
int main()
{
    int n,c,x,i,cnt=0;
    scanf("%d %d",&n,&c);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(mp.find(x)==mp.end())
        {
            mp[x]=cnt;
            a[cnt].index=i;
            a[cnt].number=x;
            cnt++;
        }
        a[mp[x]].score++;
    }
    sort(a,a+n);
     for(i=0;i<cnt;i++)
            for(int j=0;j<a[i].score;j++)
        printf("%d ",a[i].number);

    return 0;
}
