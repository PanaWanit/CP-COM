#include<bits/stdc++.h>
using namespace std;
priority_queue<int,vector<int>,greater<int>> he;
vector<int> g[100100],ans;
int in[100100];
int main(){
    int q,n,m,u,v,cnt,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
            in[v]++;
        }
        for(i=1;i<=n;i++)
            if(!in[i])
                he.push(i);
        while(!he.empty()){
            i=he.top();
            he.pop();
            //printf("%d\n",i);
            ans.push_back(i);
            for(auto x: g[i]){
                in[x]--;
                if(in[x]==0)
                    he.push(x);
            }
        }
        if(ans.size()==n){
            printf("Yes ");
            for(i=0;i<n;i++)
                printf("%d ",ans[i]);
            printf("\n");
            for(i=1;i<=n;i++)
                g[i].clear();
            while(!he.empty())
                he.pop();
            memset(in,0,sizeof in);
            ans.clear();
        }
        else{
            printf("No\n");
            for(i=1;i<=n;i++)
                g[i].clear();
            while(!he.empty())
                he.pop();
            memset(in,0,sizeof in);
            ans.clear();
        }
    }
    return 0;
}
