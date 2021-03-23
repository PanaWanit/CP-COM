#include<bits/stdc++.h>
using namespace std;
int cnt=0;
vector<int>g[2010];
queue<int> qu;
int mark[2020],dis[2020];
int main(){
    int n,x,u,v,y,i,num=0;
        scanf("%d",&n);
        while(n--){
            scanf("%d %d",&u,&v);
            g[u].push_back(v);
            g[v].push_back(u);
        }
    while(1){
        scanf("%d %d",&x,&y);
        if(!x&&!y) break;
        memset(dis,-1,sizeof dis);
        qu.push(x);
        dis[x]=0;
        while(!qu.empty()){
            n=qu.front();
            qu.pop();
            for(auto z:g[n]){
                if(dis[z]==-1){
                    dis[z]=dis[n]+1;
                    qu.push(z);
                }
            }
        }
        for(i=1;i<=1000;i++){
            if(dis[i]>y)
                cnt++;
        }
        printf("%d\n",cnt);
        cnt=0;
    }



    return 0;
}
/*
16
10 15 15 20 20 25 10 30 30 47 47 50 25 45 45 65 15 35 35 55 20 40 50 55 35 40 55 60 40 60 60 65
35 2 35 3 0 0
*/
