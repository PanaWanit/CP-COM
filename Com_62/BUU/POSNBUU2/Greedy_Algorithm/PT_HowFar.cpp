/*
    TASK: PT_HOWFAR
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  int num,idx;
  bool operator <(const A&o) const{
    if(num!=o.num)return num < o.num;
    return idx > o.idx;
  }
};
A a[1000005];
map<int,int> ans,mark;
int main(){
  int i,n;
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d",&a[i].num);
    a[i].idx=i;
    ans[a[i].num]=-1;
  }
  sort(a+1,a+n+1);
  for(i=1;i<=n;i++){
    ans[a[i].num]=max(ans[a[i].num],abs(i-a[i].idx));
  }

  for(i=1;i<=n;i++){
    if(ans[a[i].num]!=-1 && !mark[a[i].num]){
      printf("%d %d\n",a[i].num,ans[a[i].num]);
      mark[a[i].num]=1;
    }
  }
    return 0;
}
/*

1 2 1
1 2 3

1 1 2
1 3 2

12
13 3 2 1 5 1 2 1 3 6 5 13

100 1 3 2

11
1000000000 1 3 4 5 2 1 3 4 1000000000 2
*/
