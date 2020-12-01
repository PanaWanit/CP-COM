/*
	TASK: PN_Come Home
	Author: Pana Wanit
	Lang: C++
	School: RYW
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define vt vector
#define pb push_back
#define eb emplace_back
#define sz(x) (int)(x).size()
#define all(x) (x).begin(),(x).end()
#define _lb lower_bound
#define _ub upper_bound
#define FOE(x,a) for(auto& (x) : (a))
#define VIN(a) FOE(x,a) cin >> x;
#define SUM(a) accumulate(all(a),0)
void DBG() {cerr << "]" << endl;}
template<class A,class... T> void DBG(A x,T... t) {	cerr << x; if(sizeof...(t)) cerr << ","; DBG(t...);}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]:[",DBG(__VA_ARGS__)
const int mxN = 3e5+1;
int p[mxN] , cnt[mxN];
int fr(int i) {
	if(i == p[i]) return i;
	return p[i] = fr(p[i]);
}
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int n,l,u,v,pu,pv;
	cin >> n >> l;
	for(int i=1; i<=n; i++) p[i]=i,cnt[i]=1;
	for(int i=0; i<n; i++) {
		cin >> u >> v;
		pu = fr(u) , pv = fr(v);
		if(pu != pv) {
			p[pu] = pv;
			cnt[pv] += cnt[pu];
		}
		if(cnt[pv]) {
			--cnt[pv];
			cout << "Yes\n";
		}
		else cout << "No\n";
	}
	return 0;
}
