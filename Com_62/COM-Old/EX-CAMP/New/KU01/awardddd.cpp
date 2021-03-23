#include<bits/stdc++.h>
using namespace std;
int qsa[2000],qsb[2000],qsu[2000],mark[2000];
int main()
{
    int n,k=1,cnt=0,mx=-2e9,sum=0;
    scanf("%d",&n);
    int i,j;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&qsa[i]);
        if(qsa[i]!=0)
            mark[qsa[i]]=1;
    }
    for(i=1; i<=n; i++)
    {
        scanf("%d",&qsb[i]);
        if(qsb[i]!=0)
            mark[qsb[i]]=1;
    }
    for(i=2*n; i>=1; i--)
    {
        if(!mark[i])
        {
            qsu[k]=i;
            qsu[k]+=qsu[k-1];
            k++;
        }
    }


    for(i=1; i<=n; i++)
    {
        for(k=1; k<=i; k++)
        {
            sum+=qsa[k];
            if(!qsa[k])
                cnt++;
        }
        for(j=i; j<=n; j++)
        {
            sum+=qsb[j];
            if(!qsb[j])
                cnt++;
        }
        sum+=qsu[cnt];
        mx = max(sum,mx);
        sum=0;
        cnt=0;
    }

    printf("%d",mx);
    return 0;
}
/*
5
0 3 0 0 0
10 0 1 2 0

3
1 2 0
0 0 0
*/
