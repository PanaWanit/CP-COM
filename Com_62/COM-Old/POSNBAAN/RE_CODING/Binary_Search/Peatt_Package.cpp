/*
    TASK: Peatt Package
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int w[100100],c[100100],mark[100100];
int main(){
    int q,i,n,m,j,counter,mid,sum,l=1<<30,r=1<<30,ch=0,box;
    scanf("%d",&q);
    while(q--){
      l=1<<30,r=1<<30;
      scanf("%d %d",&n,&m);
      for(i=1;i<=n;i++){
        scanf("%d %d",&w[i],&c[i]);
        l=min(l,w[i]);
      }
      counter=1;
      ch=0;
      while(l<r){
        mid=(l+r)/2;
        for(i=1,box=1,sum=0;i<=n;i++){
          if(mark[c[i]]==counter || sum+w[i] > mid){
            box++;
            sum=w[i];
            counter++;
            mark[c[i]]=counter;
          }
          else{
            sum+=w[i];mark[c[i]]=counter;
          }
        }
        counter++;
        if(box>m) l=mid+1;
        else r=mid,ch=1;
      }
      if(!ch) printf("-1\n");
      else printf("%d\n",l);
    }
    return 0;
}
/*
2
5 3
10 1
10 2
40 1
30 3
30 4
5 2
10 1
10 2
40 1
30 3
30 1

*/
