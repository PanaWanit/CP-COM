/*
    TASK: 48_Bicycle
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int u,v,w;
    bool operator < (const A&o)const{
        return w >o.w;
    }
};
int p[55000];
A a[77000];
int node[55000];
map<int,int> mp;
int fr(int i){
   if(p[i]==i) return i;
   return p[i]=fr(p[i]);
}
int main(){
    int q,m,n,i,u,v,w;
    scanf("%d",&q);
    while(q--){
      int ans=0;
      scanf("%d %d",&n,&m);
      for(i=0;i<n;i++) p[i]=i;
      for(i=0;i<n;i++){
        scanf("%d",&node[i]);
        mp[node[i]]=i;
      }
      for(i=0;i<m;i++){
        scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
      }
      sort(a,a+m);
      for(i=0;i<m;i++){

        u=fr(mp[a[i].u]),v=fr(mp[a[i].v]);
        if(u!=v){
            p[u]=v;
        }
        else{
            ans+=a[i].w;

        }
      }
      memset(a,0,sizeof a);
      mp.clear();
      printf("%d\n",ans);

    }

    return 0;
}
/*
2
8 10
1 2 3 4 5 6 7 8
1 2 3
1 5 5
2 3 4
2 6 3
3 4 2
3 7 5
4 8 5
5 6 2
6 7 7
7 8 3
14 18
5 11 13 0 3 8 6 2 12 14 1 9 10 4
5 0 2
5 6 7
5 10 7
11 6 5
11 10 9
11 12 4
13 14 3
13 8 5
13 12 6
0 1 7
3 2 7
3 8 1
3 4 1
8 9 1
6 1 7
2 1 9
14 9 1
9 4 3

*/
