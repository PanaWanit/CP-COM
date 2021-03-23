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
      if(i!=o.i) return i<o.i;
      return j>o.j;
    }
};
priority_queue<A> qu;
int main(){
  int i,j,r,c,ch=0,slide = 1 << 20;
  scanf("%d %d",&r,&c);
  for(i=1;i<=r;i++){
    scanf("%s",a[i]);
  }
  for(i=1;i<=r;i++){
    for(j=1;j<=c;j++){
      if(a[i][j]=='X'){
        qu.push({i,j});

        if(!iofjX[j]) iofjX=i;
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
  printf("%d\n",slide);


  for(i=1;i<=r;i++){
    printf("%s\n",a[i]);
  }
    return 0;
}
/*
5 6
.XXXXX
...X..
......
#..###
######

*/
