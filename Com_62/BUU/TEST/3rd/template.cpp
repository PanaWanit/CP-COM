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

const int mxN = 5e4;
priority_queue<int, vt<int>, greater<int>> pq;
vt<int> adj[mxN];
int in[mxN];
void solve() {
	int n,m;
	read(n, m);
	FOR(m) {
		int u,v;
		read(u, v);
		--u, --v;
		adj[u].push_back(v);
		++in[v];
	}
	FOR(n)
		if(!in[i]) pq.push(i);
	vt<int> ans;
	bool ch=0;
	while(!pq.empty()) {
		if(pq.size() >= 2) {
			ch=1;
			int first = pq.top();
			pq.pop();
			int second = pq.top();
			pq.push(first);
			pq.pop();
			ans.push_back(second);
			continue;
		}
		int u = pq.top();
		ans.push_back(u);
		FOE(x, adj[u]) {
			--in[x];
			if(!in[x]) pq.push(x);
		}
	}
	if(ans.size() != n) print("Never");
	else {
		write(ch?"Different ":"Same ");
		FOE(x, ans) write(x, " ");
		print();
	}
	memset(in,0,sizeof(in));
	fill_n(adj, n, vt<int>());
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	read(t);
	while(t--) solve();
	return 0;
}
