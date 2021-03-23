/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mark[100100];
vector <int> g[100100];
void dfs(int u){
  if(mark[u]) return ;
  mark[u]=1;
  printf("%d ",u);
  for(auto x:g[u]){
    dfs(x);
  }

}
int main(){
    int n,m,i;
    scanf("%d %d",&n,&m);
    while(m--){
      int u,v;
      scanf("%d %d",&u,&v);
      g[u].push_back(v);
    }
    for(i=1;i<=n;i++)
      sort(g[i].begin(),g[i].end());
    dfs(1);

    return 0;
}
/*
5 6
1 2
2 3
3 4
4 5
5 6
6 1

6 5
1 2
1 3
2 4
2 5
3 6

3 3
1 2
2 3
3 1
*/
