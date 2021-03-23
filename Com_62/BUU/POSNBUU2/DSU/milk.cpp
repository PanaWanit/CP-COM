/*
    TASK: milk
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100];
int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}
int main(){
    int n,q,i,u,v,w;
    char c;
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++) p[i]=i;
    while(q--){
      scanf(" %c",&c);
      if(c=='q'){
        scanf("%d %d",&u,&v);
        if(p[fr(u)]==p[fr(v)]) printf("yes\n");
        else printf("no\n");
      }
      else{
        scanf("%d %d",&u,&v);
        p[fr(u)]=fr(v);
      }
    }
    return 0;
}
/*
5 10
q 1 2
c 1 3
q 3 2
c 3 2
q 1 2
q 4 5
c 4 2
q 4 1
c 1 4
q 5 1
*/
