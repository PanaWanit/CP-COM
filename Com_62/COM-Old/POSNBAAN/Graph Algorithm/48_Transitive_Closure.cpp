/*
    TASK: 48 Transitive Closure
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[550][550],graph[550][550];
int main(){
  int i,j,n,k;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
    }
  for(k=1;k<=n;k++){
    for(i=1;i<=n;i++){
      for(j=1;j<=n;j++){
        if(a[i][k]&&a[k][j]){
          a[i][j]=1;
        }
      }
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++) printf("%d ",a[i][j]);
    printf("\n");
  }

    return 0;
}
/*
4
0 0 1 0
1 0 0 1
0 0 0 0
0 1 0 0
*/
