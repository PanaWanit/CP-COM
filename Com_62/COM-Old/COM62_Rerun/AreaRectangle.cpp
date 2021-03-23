#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[1001][1001];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r,c; 
  cin >> r >> c;
  for(int i=1;i<=r;i++){
    for(int j=1;j<=c;j++){
      int x;cin >> x;
      dp[i][j] = x + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
    }
  }
  int q;
  cin >> q;
  while(q--){
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1++,x2++,y1++,y2++;
    cout << dp[x2][y2] - dp[x2][y1-1] - dp[x1-1][y2] + dp[x1-1][y1-1] << "\n";
  }
  return 0;
}
