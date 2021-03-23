/*
    TASK: Bipartite
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>g[100100];
int color[100100];
int dfs(int u,int c){
  if(color[u]&&color[u]==c) return 1;
  else if(color[u]&&color[u]!=c) return 0;
  else{
    color[u]=c;
    for(auto x:g[u]){
      if(!color[x]){
        if(!dfs(x,3-c)) return 0;
      }
      else if(color[x]!=3-c) return 0;
    }
  }
  return 1;
}
int main(){
    int q,n,m,i,u,v;
    scanf("%d",&q);
    while(q--){
      scanf("%d %d",&n,&m);
      while(m--){
        scanf("%d %d",&u,&v);
        g[u].push_back(v);
        g[v].push_back(u);
      }
      memset(color,0,sizeof color);
      int ch;
      for(i=1;i<=n;i++){
        if(!color[i]){
            ch=dfs(i,1);
            printf("[%d %d]\n",i,ch );
            if(!ch) break;
        }
      }
      if(ch) printf("yes\n");
      else printf("no\n");
      for(i=1;i<=n;i++) g[i].clear();
    }
    return 0;
}
/*
2
4 4
1 2
2 3
3 4
4 1
3 3
1 2
2 3
3 1
*/
