#include<bits/stdc++.h>
using namespace std;
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   unordered_map<int,vector<int>> mp;
   int n,q,i=0;
   for(cin >> n >> q;n--;){
      int x;
      cin >> x;
      mp[x].push_back(++i);
      
   }
   while(q--){
      int l,r,c;
      cin >> l >> r >> c;
      vector<int> &g = mp[c];
      cout << upper_bound(g.begin(),g.end(),r) - lower_bound(g.begin(),g.end(),l) << "\n"; 
   }
   return 0;
}
/*
 * TOD :
 * mp[i] all of num i position
 * mp[1] = {1,3,5}
 * mp[2] = {2,4,6,8}
 * mp[3] = {7,9,10}
 * ub-lb find length
 * unordered_map time 142 ms
 * map time 190 ms
 */
