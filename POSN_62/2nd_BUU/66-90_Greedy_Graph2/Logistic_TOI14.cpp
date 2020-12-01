#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using db = double;
#define vt vector
#define ar array

#define TA template<class A> void
#define TC template<class A, class... T> void
#define CA const A& x, const T& ...t

#define FOE(x, a) for(auto& x: a)
#define FOR_R(i, s, e, p) for(int i=(s); (p)>0?i<(e):i>=(e); i+=(p))
#define FOR1(e) FOR_R(i, 0, e, 1)
#define FOR2(i, e) FOR_R(i, 0, e, 1)
#define FOR3(i, s, e) FOR_R(i, s, e, 1)
#define FOR4(i, s, e, p) FOR_R(i, s, e, p)
#define ALL5(a, b, c, d, e, ...) e
#define SEL_FOR(...) ALL5(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)
#define FOR(...) SEL_FOR(__VA_ARGS__)(__VA_ARGS__)

template<class A> bool umax(A& x, const A& y) {return x<y?x=y,1:0;} 
template<class A> bool umin(A& x, const A& y) {return x>y?x=y,1:0;}
TA read(vt<A>& v); 
template<class A, size_t SZ>
void read(ar<A,SZ>& a); 
TA read(A& x) {cin >> x;} 
TC read(A& x, T& ...t) {read(x); read(t...);} 
template<class A, size_t SZ> void read(ar<A, SZ>& a) {FOE(x, a) read(x);}
TA read(vt<A>& v) {FOE(x, v) read(x);}
TA write(const A& x) {cout << x;} 
TC write(CA) {write(x);write(t...);} 
void print() {write("\n");} TC print(CA) {write(x); if(sizeof ...(t)) write(" "); print(t...);}
void DBG() {cerr << "]" << endl;} TC DBG(A x, T ...t) {cerr << x; if(sizeof ...(t)) cerr << ", " ; DBG(t...);}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
const int mxN = 100;
int fuel[mxN], d[2][101][mxN];
vt<pair<int,int>> adj[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,mxf,s,e;
	read(n);
	FOR(n)
		read(fuel[i]);
	read(s, e, mxf, m);
	--s, --e;
	while(m--) {
		int u,v,w;
		read(u, v, w);
		--u, -- v;
		adj[u].emplace_back(v, w);
		adj[v].emplace_back(u, w);
	}
	priority_queue<pair<int,ar<int,3>>, vt<pair<int,ar<int,3>>>, greater<pair<int, ar<int,3>>>> pq;
	pq.emplace(0, ar<int,3>{s, 0, 0});
	memset(d, 0x3f, sizeof(d));
	d[0][0][s] = 0;
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		if(u[1]+1 <= mxf && d[u[2]][u[1]+1][u[0]] > p.first+fuel[u[0]]) {
			d[u[2]][u[1]+1][u[0]] = p.first + fuel[u[0]];
			pq.emplace(d[u[2]][u[1]+1][u[0]], ar<int,3>{u[0], u[1]+1, u[2]});
		}
		if(!u[2] && d[1][mxf][u[0]] > p.first) {
			d[1][mxf][u[0]] = p.first;
			pq.emplace(d[1][mxf][u[0]], ar<int,3>{u[0], mxf, 1});
		}
		pq.pop();
		FOE(v, adj[u[0]]) {
			if(u[1]-v.second >= 0 && d[u[2]][u[1]-v.second][v.first] > p.first) {
				d[u[2]][u[1]-v.second][v.first] = p.first;
				pq.emplace(p.first, ar<int,3>{v.first, u[1]-v.second, u[2]});
			}
		}
	}
	print(d[1][mxf][e]);
	return 0;
}
