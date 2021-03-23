/*
    TASK: B-Hacker(small)
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m,i,j,mx,x;
    cin >> n >> m;
    int a[n+10][m+10],sc[n+10];
    memset(sc,0,sizeof sc);
    for(i=1;i<=n;i++){
      for(j=1;j<=m;j++){
          cin >> a[i][j];
      }
    }
    for(i=1;i<=n;i++) sort(a[i]+1,a[i]+m+1);

    for(j=1;j<=m;j++){
      mx =-2e9;
      for(i=1;i<=n;i++){
          if(a[i][j]>mx){
            mx = a[i][j];
            x = i;
          }
      }
      sc[x]++;
    }
    mx = -2e9;
    for(i=1;i<=n;i++){
      if(sc[i] > mx){
          mx = sc[i];
          x = i;
      }
     // cout << sc[i] << " ";
    }
    cout << x;

    return 0;
}
