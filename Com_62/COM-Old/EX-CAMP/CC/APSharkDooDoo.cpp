#include<bits/stdc++.h>
using namespace std;
vector<int> g[50100];
int a[1010],cnt=0,i,mx=-2e9,ans,mark[1010],vcnt[51000],m2[1010],qs[1010],sum=0;
void dfs(int u){
    if(mark[u]) return;
    sum+=a[u];
    mark[u]=1;
    for(auto x:g[u]){
        dfs(x);
    }

}
int main(){
    int n,m,u,v,h=1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
    }


    for(i=1;i<=n;i++){
        sum=0;
        dfs(i);
        if(sum>mx){
            ans=i;
            mx=sum;
        }
        memset(mark,0,sizeof mark);
    }
    printf("%d %d",ans,mx);
}
/*
O(n+m+n(n+m+n))
O(1010(2020+50000))
52000
*/
/*
5 6
7 2 3 9 4
1 3
2 5
4 1
3 5
4 5
2 1

*/
