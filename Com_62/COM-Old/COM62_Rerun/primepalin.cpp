#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 1e6 + 4e3;
bool mark[mxN];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   vector<int> prime{2};
   for(int i=3;i<=sqrt(mxN) ;i+=2){
      if(mark[i]) continue;
      for(int j=i*i;j<=mxN;j+=i) mark[j] =1;
   }
   for(int i=3;i<=mxN;i+=2) if(!mark[i]) prime.push_back(i);
   int n;cin >> n;

   for(int i=0;i<prime.size();i++){
      bool ch = 1;
      if(prime[i] < n) continue;
      string s = to_string(prime[i]);
      int len = s.size();
      for(int j=0;j<len/2;j++){
         if(s[j] != s[len-j-1]){ch=0;break;}
      }
      if(!ch) continue;
      cout << prime[i] << "\n";
      return 0;
   }
}
