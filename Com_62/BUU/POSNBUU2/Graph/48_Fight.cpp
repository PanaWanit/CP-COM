/*
    TASK: 48_Fight
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int color[100100],mark[100100],cnt=0;
int a[300300],b[300300];
int dfs(int u,int now){
    if(mark[u] && color[u]==now) return 1;
    if(mark[u] && color[u]!=now) return 0;
    mark[u]=1,color[u]=now;
    for(auto x:g[u]){
        if(dfs(x,3-now)==0) return 0;
    }
    return 1;
}
int main(){
    int q,i,j,u,v,ch;
        int n,m;
        scanf("%d %d",&n,&m);
        for(i=1;i<=m;i++){
            scanf("%d %d",&a[i],&b[i]);
        }
        int l=1,r=m+1;
        while(l<r){
            int mid=(l+r+1)/2;
            for(i=1;i<=mid;i++){
                g[a[i]].push_back(b[i]);
                g[b[i]].push_back(a[i]);
            }
            for(i=1,ch=1;i<=n;i++){
                if(mark[i]) continue;
                if(dfs(i,1)==0){
                    ch=0;break;
                }
            }
            if(ch) l=mid;
            else r=mid-1;
            for(i=1;i<=n;i++){
                g[i].clear();
            }
            memset(mark,0,sizeof mark);
            memset(color,0,sizeof color);

        }
        printf("%d\n",l+1);

}
/*
6 8
3 4
1 2
5 6
1 6
1 3
4 5
2 4
2 6
*/
