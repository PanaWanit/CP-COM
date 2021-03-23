#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
vector<pii> g;
bool cmp(const pii&a , const pii& b){
   if(a.first != b.first) return a.first < b.first;
   return a.second > b.second;
}
int num[10] ;
pii a[10];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int n,mn = 2e9;
   cin >> n;
   for(int i=0;i<10;i++){
      cin >> a[i].first;
      num[i] = a[i].first;
      a[i].second = i;
      mn = min(mn,a[i].first);
   }
   if(mn > n){
      cout << -1 << "\n";
      return 0;
   }
   sort(a,a+10,cmp);
   g.push_back(a[0]);
   vector<pii>::iterator it = g.begin();
   for(int i=1;i<10;i++){
      if( it->second <= a[i].second ) g.push_back(a[i]),it++;
   }
   string ans;
   int sz = g.size();
   while(n >= 2*mn){
      for(int i=0;i<sz;i++){
         if(ans.size() == 0 && g[i].second == 0) continue;
         if(n-g[i].first >= mn){
            ans += char(g[i].second + '0');
            n-=g[i].first;
            break;
         }
      }
   }
   int mx = -2e9;
   for(int i=0;i<sz;i++){
      if(n - g[i].first >= 0){
         mx = max(mx , g[i].second);
      }
   }
   ans += char(mx + '0');
   sort(ans.begin(),ans.end(),greater<char>());
   cout << ans << "\n";
   return 0;
}
