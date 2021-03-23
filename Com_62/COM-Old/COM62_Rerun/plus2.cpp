#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 10100;
int ans[mxN];
void pl(string a, string b){
  int pa = a.size()-1 , pb = b.size()-1;
  for(int i = mxN-1,tod=0;i>=0;i--) {
    int aa = a[pa] , bb = b[pb];
    if(pa < 0) aa = '0';
    if(pb < 0) bb = '0';
    int x = aa + bb -(2*'0') + tod;
    ans[i] = x%10;
    tod = x/10;
    pa--,pb--;
  }
  int i;for(i=0;i<mxN;i++) if(ans[i]) break;
  for(;i<mxN;i++) cout << ans[i];
}
void mn(string a,string b,bool isA){
  if(a==b) {cout << 0 ;return;}
  int pa = a.size()-1 , pb = b.size()-1;
  bool issw = 0;
  if(pb > pa) swap(a,b),swap(pa,pb),issw=1;
  else if(pa == pb){
    for(int i=0;i<=pa;i++){
      if(a[i] > b[i]) break;
      else if(a[i] < b[i]) {swap(a,b),swap(pa,pb),issw=1;break;}
    }
  }
  if(issw==0 && isA==1) cout << "-";
  if(issw==1 && isA==0) cout << "-";
  for(int i=mxN-1;i>=0;i--){
    int aa = a[pa] , bb = b[pb];
    if(pa < 0) aa = '0';
    if(pb < 0) bb = '0';
    if(aa >= bb) ans[i] = aa-bb;
    else{
      ans[i] = aa-bb+10;
      for(int j=pa-1;j>=0;j--){
        if(a[j] == '0') a[j] = '9';
        else {a[j]-=1;break;}
      }
    }
    pa--,pb--;
  }
  int i;for(i=0;i<mxN;i++) if(ans[i]) break;
  for(;i<mxN;i++) cout << ans[i];
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a,b;
  cin >> a >> b;
  if(a[0] == '-' && b[0] =='-') {
    cout << "-";pl(a.substr(1) , b.substr(1));
  }
  else if(a[0] != '-' && b[0]!='-'){
     pl(a,b);
  }
  else{
    if(a[0] == '-') mn(a.substr(1) , b,1);
    else mn(a,b.substr(1),0);
  } 
  return 0;
}
