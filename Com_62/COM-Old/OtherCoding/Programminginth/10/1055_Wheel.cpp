#include<bits/stdc++.h>
using namespace std;
#define ll long long
int a[101],p[101];
bool used[101];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,k,last=0;
   cin >> n >> k;
   for(int i=0;i<n;i++) cin >> a[i];
   for(int i=0;i<n;i++){
      int l;cin >> l;
      for(int j=0;j<=l;j++){
        if(used[last++%n]) j--;
      }
      last--;
      used[last%n] = 1;
      p[i%k] += a[last%n]; 
   }
   for(int i=0;i<k;i++) cout << p[i] << "\n";
   return 0;
}
