/*
    TASK: RT_Thanos
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[3030][3030];
int iofjsharp[3030],iofjX[3030];
struct A{
    int i,j;
    bool operator < (const A&o) const{
      return i<o.i;

    }
};
priority_queue<A> qu,qu2;
int main(){
  int i,j,r,c,slide = 3030,ni,nj,cnt=0;
  scanf("%d %d",&r,&c);
  for(i=1;i<=r;i++){
    scanf(" %s",a[i]+1);
  }
  for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
      if(a[i][j]=='X'){
        qu.push({i,j});
        iofjX[j]=i;
      }

      else if(a[i][j]=='#'&&!iofjsharp[j]){
        iofjsharp[j]=i;
      }
    }
  }
  for(j=1;j<=c;j++){

    if(iofjX[j]&&iofjsharp[j]){
      slide=min(iofjsharp[j]-iofjX[j],slide);
    }

  }
  while(!qu.empty()){
    ni=qu.top().i,nj=qu.top().j;
    qu.pop();

    a[ni+slide-1][nj] = 'X';

    a[ni][nj] = '.';
    cnt++;
  }

  for(i=1;i<=r;i++){
    printf("%s\n",a[i]+1);
  }
    return 0;
}
/*
7 3
XXX
XXX
XXX
.X.
...
...
###

5 6
#.XXX#
#.X..#
#.X..#
##.###
######

5 5
.X...
.....
.....
.....
#####

3 3
XXX
...
###
*/
