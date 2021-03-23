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
#define _lb(a,x) lower_bound(all(a),x);
#define _ub(a,x) upper_bound(all(a),x);

#define fp first
#define sp second

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
const int mxN = 1e6+10;
int dpl[mxN] , dpr[mxN] , a[mxN];
void solve(){
	int n;
	cin >> n >> a[1];
	int mn = a[1];
	for(int i=2;i<=n;i++){
		cin >> a[i];
		dpl[i] = dpl[i-1];
		if(a[i] > mn) dpl[i] = max(dpl[i-1],a[i] - mn);
		mn = min(mn,a[i]);
	}
	int mx = a[n];
	for(int i=n-1;i>=0;i--){
		dpr[i] = dpr[i+1];
		if(a[i] < mx) dpr[i] = max(dpr[i+1] , mx - a[i]); 
		mx = max(mx ,a[i]);
	}
	mx = -2e9;
	for(int i=2;i<n;i++){
		mx = max(mx , dpl[i] + dpr[i+1]);
	}
	cout << mx << "\n";
}
int main(){
	use_ios();
	int q;
	for(cin >> q;q--;)
		solve();
 	return 0;  
}

