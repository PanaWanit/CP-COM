#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 10100;
int ans[10100];
void mul(string a,string b){
  int lena = a.size() , lenb = b.size();
  int pa=0,pb;
  for(int i=lena-1,tod=0,x;i>=0;i--){
    int aa = a[i] - '0';
    pb=0;
    for(int j = lenb-1;j>=0;j--){
      int bb = b[j] - '0';
      x = aa*bb + ans[pa+pb]+tod;
      tod = x/10;
      ans[pa+pb] = x%10;
      pb++;
    }
    if(tod > 0) ans[pa+pb] += tod;
    pa++; 
  }
  string strans;
  int i;for(i=mxN-1;i>=0;i--) if(ans[i]) break;
  for(;i>=0;i--) strans = to_string(ans[i]);
  cout << ans << "\n";

}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a,b;
  cin >> a >> b;
  if( (a[0] == '-' && b[0] != '-') || (a[0]!='-' && b[0] == '-')) cout << "-";
  if(a[0] == '-') a = a.substr(1);
  if(b[0] == '-') b = b.substr(1);
  mul(a,b); 
  return 0;
}
