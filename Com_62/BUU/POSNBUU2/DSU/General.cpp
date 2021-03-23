/*
    TASK: General
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int p[100100],a[100100];
int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}
int main(){
    int n,m,i,pa,pb,u,v;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++){

      scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++) p[i]=i;
    while(m--){
      scanf("%d %d",&u,&v);
      pa=fr(u),pb=fr(v);
      if(pa==pb){
        printf("-1\n");
      }
      else if(a[pa]>a[pb]){
        printf("%d\n",pa);
        a[pa]+=(a[pb]/2);
        p[pb]=pa;
      }
      else if(a[pb]>a[pa]){
        printf("%d\n",pb);
        a[pb]+=(a[pa]/2);
        p[pa]=pb;
      }
      else if(a[pa]==a[pb]){
        if(pa > pb){
          printf("%d\n",pb);
          a[pb]+=(a[pa]/2);
          p[pa]=pb;
        }
        else if(pb > pa){
          printf("%d\n",pa);
          a[pa]+=(a[pb]/2);
          p[pb]=pa;
        }

      }
    }

    return 0;
}
/*
5 4
3
4
5
6
7
1 5
1 2
1 2
3 4
*/
