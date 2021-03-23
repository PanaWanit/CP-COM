#include<bits/stdc++.h>
#define ll long long
using namespace std;
int high[30],low;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int r,c;
  cin >> r >> c;
  string a[23];
  for(int i=0;i<r;i++)
    cin >> a[i];
  for(int j=0;j<c;j++){
    high[j] = r;
    for(int i=r-1;i>=0;i--){
      if(a[i][j] =='O') high[j] = i;
    }
  }

  for(int i=0; i<c; i++){
    int x;
    cin >> x;
    while(x--){
      if(high[i]-1 < 0) break;
      high[i]-=1;
      a[high[i]][i] = '#';
    }
  }
  for(int i=0;i<r;i++)
    cout << a[i] << "\n";
}
