/*
    TASK: Union Find
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int head[100100];
int find(int a){
  if(a==head[a]) return a;
  return find(head[a]);
}
void union(int a,int b){
  int ha=head[a],hb=head[b];
  if(ha==hb) return;
  else{
    head[find(ha)]=hb;
  }
}
int main(){
    int n,m,a,b;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
      head[i]=i;
    }
    while(m--){
      scanf("%d %d",&a,&b);
      find(a);
      union(a,b);
    }
    return 0;
}
