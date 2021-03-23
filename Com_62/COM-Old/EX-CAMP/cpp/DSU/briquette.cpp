/*
    TASK: briquette
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;

int p[100100],mark[10100];
int fr(int i){
    if(p[i]==i) return i;
    return p[i]=fr(p[i]);
}
int main()
{
    int n,m,i,x,j,y,ans=0,k,l;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++)
        p[i]=i;
    while(n--){
        scanf("%d",&j);
        if(j==0) ans++;
        else scanf("%d",&k),mark[k]=1;
        for(i=0;i<j-1;i++){
            scanf("%d",&l);
            mark[l]=1;
            p[fr(l)] = fr(k);
        }
    }
    for(i=1;i<=m;i++){
        if(p[i]==i&&mark[i]==1){
            ans++;
        }
    }
    printf("%d",ans-1);
    return 0;
}
