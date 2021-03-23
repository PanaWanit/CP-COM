#include<bits/stdc++.h>
#define ll long long
using namespace std;
int a[2510];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,sum=0,st=1,ed,mx = -1e9;
  int anst = 0 , anse;
  bool ch = 0;
  cin >> n;
  for(int i=1,x;i<=n;i++){
     cin >> x;
     a[i] = x;
     if(sum+x > 0){
       sum+=x;
       ed = i;
       ch = 1;
       if(sum > mx){
         mx = sum;
         anst = st;
         anse = ed;
       }
     }
     else {
       sum = 0 , st = i+1 ;
     }
  }
  if(!ch) cout << "Empty sequence\n";
  else{
    for(int i=anst;i<=anse;i++) cout << a[i] << " ";
    cout << "\n" <<  mx << "\n";
  }
  return 0;
}
