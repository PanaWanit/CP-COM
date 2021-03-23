#include<bits/stdc++.h>
using namespace std;

vector<int> g[2020];
int mark[2020],mark2[2020];
int y,cnt=0,nn=0;
void dfs(int u){
    if(cnt>y) return;
    mark[u]=1;
    if(!mark2[u])
    mark2[u]=1,nn++;
    for(auto x:g[u]){
        if(mark[x]) continue;
        cnt++;
        dfs(x);
        cnt--;
    }

}
int main(){
    int n,x,u,v,num=0;
    scanf("%d",&n);
    while(n--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
        if(!mark[u]){
            num++;
            mark[u]=1;

        }
        if(!mark[v]){
            num++;
            mark[v]=1;
        }
        //printf("%d]\n",num);
    }

    while(1){
        memset(mark,0,sizeof mark);
        memset (mark2,0,sizeof mark2);
        nn=0;
        cnt=0;
        scanf("%d %d",&x,&y);
        if(x==0&&y==0) break;
        dfs(x);
        printf("%d\n",num-nn);

    }
    return 0;
}
/*
16
10 15 15 20 20 25 10 30 30 47 47 50 25 45 45 65 15 35 35 55 20 40 50 55 35 40 55 60 40 60 60 65
35 2 35 3 0 0
*/
