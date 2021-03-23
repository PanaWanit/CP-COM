#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef string str;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

#define pq(x) priority_queue<x>
#define lpq(x) priority_queue<x,vector<x>,greater<x>>
#define vt(x) vector<x>
#define omap unordered_map

#define all(a) (a).begin(),(a).end()
#define pb push_back
#define eb emplace_back
#define dec(x)  fixed << setprecision(x)
#define _lb lower_bound
#define _ub upper_bound

#define fp first
#define sp second

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
const int mxN = 1e5+10;
int a[mxN];
int main(){
	use_ios();
   omap<int,vector<int>> mp;
   int n,q;
   cin >> n >> q;
   for(int i=1;i<=n;i++){
      cin >> a[i];
      mp[a[i]].pb(i);
   }
   while(q--){
      int l,r,cnt=0;
      cin >> l >> r;
      for(auto& x:mp){
         if(upper_bound(all(x.sp),r) - lower_bound(all(x.sp),l) == x.fp) cnt++;
      }
      cout << cnt << "\n";
   }

 	return 0;  
}
/*
	TASK:	PN_DOUBT
	AUTHOR: ppnw~!
	LANG: CPP
	SCHOOL: N/A
	TXTEDITOR: Vim
*/
 
