#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN= 2e5+10;
int e;
int a[mxN],mark[mxN];
int go(int s){
  if(mark[s]) return 0;
  mark[s] = 1;
  if(s == a[s]) return 0;
  if(s == e) return 1;
  return go(a[s]);
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,t;
  cin >> n >> t;
  for(int i=1;i<=n;i++) cin >> a[i];
  while(t--){
    int s,aa,bb;
    cin >> s >> e >> aa >> bb;
    swap(a[aa],a[bb]);
    if(go(s)) cout << "DEAD\n";
    else cout << "SURVIVE\n";
    swap(a[aa],a[bb]);
    memset(mark,0,sizeof mark);
  }

  return 0;
}
