#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 1e6+1;
int a[mxN];
vector<int> b;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n;
   cin >> n;
   for(int i=0;i<n;i++)
      cin >> a[i];
   for(int i=0;i<n;i++){
      vector<int>::iterator idx = upper_bound(b.begin(),b.end(),a[i]);
      int p = idx - b.begin();
      if(idx == b.end()) b.push_back(a[i]);
      else b[p] = a[i]; 
   }
   cout << n - b.size() << "\n";
   return 0;
}
