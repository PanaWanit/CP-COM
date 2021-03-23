/*
    TASK: AP_RoadBuild
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
long long p[300100],qx[300100],qy[300100],sx[300100],sy[300100];

int fr(int i){
  if(p[i]==i) return i;
  return p[i]=fr(p[i]);
}


int main(){
  long long q,qq,v,e,m,x,y,ch=0,i,ans=0;
  scanf("%lld",&q);
  for(qq=1;qq<=q;qq++){
    scanf("%lld %lld %lld",&v,&e,&m);
    for(i=1;i<=v;i++) p[i]=i;
    for(i=1;i<=m;i++)
      scanf("%lld %lld",&qx[i],&qy[i]);
    for(i=1;i<=e;i++)
      scanf("%lld %lld",&sx[i],&sy[i]);

    int l=1,r=e+1;
    while(l<r){
      for(i=1;i<=v;i++) p[i]=i;
      ans=0;
      int mid = (l+r)/2;
      for(i=1;i<=mid;i++){
        p[fr(sx[i])]=fr(sy[i]);
      }
      for(i=1;i<=m;i++){
        if(fr(qx[i])==fr(qy[i]))
          ans++;
      }
      if(ans==m) r=mid,ch=1;
      else l=mid+1;
    }
    printf("C#%d: ",qq);
    if(ch)printf("%lld\n",l),ch=0;
    else printf("-1\n");

  }

  return 0;
}
/*
1
5 5 5
1 2
1 3
3 2
4 5
2 5
1 5
2 3
1 4
1 3
2 5

*/
