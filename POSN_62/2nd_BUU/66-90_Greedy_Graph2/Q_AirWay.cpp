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
const int mxN = 1e3;
vt<pair<int, int>> adj[mxN];
int d[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,s,e,a,b,c,t;
	read(n, m, s, e, a, b, c, t);
	while(m--) {
		int u,v,w;
		read(u, v, w);
		adj[u].emplace_back(v, w);
	}
	memset(d, 0x3f, sizeof(d));
	d[s] = 0;
	priority_queue<pair<int,int>, vt<pair<int,int>>, greater<pair<int,int>>> pq;
	pq.emplace(0, s);
	while(!pq.empty()) {
		int u = pq.top().second, p = pq.top().first;
		pq.pop();
		if(u == a && p<=t && d[b] > d[u]+c) {
			d[b] = d[u]+c;
			pq.emplace(d[b], b);
		}
		FOE(v, adj[u]) {
			if(d[v.first] > p+v.second) {
				d[v.first] = p+v.second;
				pq.emplace(d[v.first], v.first);
			}
		}
	}
	print(d[e]);
	return 0;
}
