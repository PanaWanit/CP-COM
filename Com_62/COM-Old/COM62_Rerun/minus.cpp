#include<bits/stdc++.h>
using namespace std;
string a,b;
const int mxN = 10010;
int ans[mxN],lena,lenb;
void pl(){
  if(a[0] == '-')
    cout << "-";
  for(int i=mxN-1,tod=0,aa,bb;i>=0;i--,lena--,lenb--){
    aa = a[lena] , bb = b[lenb];
    if(lena<0 || a[lena] =='-') aa = '0'; 
    if(lenb<0 || b[lenb]=='-') bb = '0';
    int x = aa + bb - '0' - '0' + tod;
    ans[i] = x%10;
    tod = x/10;
  }
  int i;
  for(i=0;i<mxN;i++) if(ans[i]) break;
  for(;i<mxN;i++) cout << ans[i]; 
}
void mi(bool isnegative){
  if(a==b){cout << "0";return;}
  bool issw = 0;
  if(lenb > lena)
    swap(lena,lenb),swap(a,b),issw=1;
  else if(lenb == lena){
    for(int i=isnegative;i<=lena;i++){
      if(a[i] > b[i]) break;
      if(b[i] > a[i]) {swap(lenb,lena),swap(a,b),issw=1;break;}
    }
  }
  if(!issw && isnegative==1) cout << "-";
  if(issw && isnegative==0) cout << "-";
  for(int i = mxN-1,aa,bb;i>=0;i--,lena--,lenb--){
    aa = a[lena] , bb = b[lenb];
    if(lena<0 || a[lena] == '-') aa = '0';
    if(lenb <0 || b[lenb]=='-') bb = '0';
    if(aa - bb >= 0) ans[i] = int(aa-bb);    
    else{
      ans[i] = (int)(aa-bb+10);
      for(int j= lena - 1;j>=0;j--){
         if(a[j] == '0') a[j] = '9';
        else {a[j]-=1;break;}
      }
    }
  }int i;
  for(i=0;i<mxN;i++) if(ans[i]) break;
  for(;i<mxN;i++) cout << ans[i];
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b;  
  lena = a.size()-1 , lenb = b.size()-1;
  if( a[0] == '-' && b[0] == '-') mi(1);
  else if(a[0]!='-' && b[0]!='-') mi(0);
  else pl();
  cout << "\n";
  return 0;
}
