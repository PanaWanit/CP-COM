#include<bits/stdc++.h>
#define ll long long
using namespace std;
#define PI pair<int,int>
set<PI> s[1001];
int cc[1001];
int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);
   int t,q;
   int p=0;
   cin >> t >> q;
   while(t--){
      int n;
      set<PI> ss;
      cin >> n;n--;
      while(n--){
         int a,b;
         cin >> a >> b;
         if(a > b) swap(a,b);
         ss.insert(make_pair(a,b));
      }bool ch=0;
      for(int j=0;j<p;j++){
         if(s[j] == ss) cc[j]++,ch=1;
      }
      if(!ch) s[p] = ss , cc[p++] = 1;

   }
   while(q--){
      int n;cin >> n;n--;
      set<PI> ss;
      while(n--){
         int a,b;
         cin >> a >> b;
         if(a>b) swap(a,b);
         ss.insert(make_pair(a,b));
      }int cnt=0;
      for(int i=0;i<p;i++){
        if(s[i] == ss) cnt+=cc[i];
      }
      cout << cnt << "\n";
   }
   return 0;
}
