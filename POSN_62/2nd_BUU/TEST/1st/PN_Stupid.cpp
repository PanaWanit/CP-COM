/*
	Task: PN_Stupid
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
void solve() {
	ll s , p;
	cin >> s >> p;
	ll lb = 1 , rb = s/2+1;
	while(lb < rb) {
		ll mb = (lb+rb)/2;
		if(mb * (s-mb) == p) { cout << mb << " " << s-mb << "\n";return;}
		if(mb * (s-mb) > p) rb = mb;
		else lb = mb+1;
	}
	cout << "No answer\n";
}
int main() {
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t; t--;) solve();
	return 0;
}
