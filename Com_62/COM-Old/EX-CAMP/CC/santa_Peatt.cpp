#include<bits/stdc++.h>
using namespace std;
int id[100500],l[100500],r[100500],a[100500],cnt=0,mark[100500],k;
vector<int> g;
void dfsl(int u){

    if(l[u]==0) {k=u;return;}

    dfsl(l[u]);
}
void dfs(int u){
    if(u==0) return;
    if(mark[u]) cnt++,g.push_back(u);
    else if(a[u]<=cnt) ;
    else g.push_back(u);

    dfs(r[u]);
}

int main(){
    int nid,hack;
    int n,m,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&id[i]);

    }

    for(i=0;i<n-1;i++){
        r[id[i]]=id[i+1];
    }
    for(i=1;i<n;i++)
        l[id[i]]=id[i-1];

    for(i=0;i<n;i++)
        scanf("%d",&a[id[i]]);
    while(m--){
        scanf("%d %d",&nid,&hack);
        mark[nid]=1;
        r[nid]=hack;
        l[nid]=l[hack];
        l[hack]=nid;
        r[l[l[hack]]]=nid;
    }
    dfsl(id[0]);
    dfs(k);
    printf("%d\n",g.size());
    for(auto x:g)
        printf("%d ",x);
    return 0;
}
/*
3 2
5 2 4
1 1 1
1 2
3 1

3 3
5 2 4
1 1 1
1 5
3 1
6 3

*/
