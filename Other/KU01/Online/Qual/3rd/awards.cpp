#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;
using db = double;

#define P pair
using pii = P<int,int>;
using pip = P<int,pii>;
#define fp first
#define sp second

#define vt vector
using vti = vt<int>;
using vtl = vt<ll>;
using vtd = vt<db>;
using vts = vt<str>;
using vtb = vt<bool>;
using vtld = vt<ld>;
using vtp = vt<pii>;
using vtpp = vt<pip>;
#define pb push_back
#define pf push_front
#define eb emplace_back
#define ef emplace_front

#define gt greater
using gti = gt<int>;
using gtl = gt<ll>;
using gtd = gt<db>;
using gts = gt<str>;
using gtld = gt<ld>;
using gtp = gt<pii>;
using gtpp = gt<pip>;

#define umap unordered_map
#define uset unordered_set
#define prq priority_queue
#define bs bitset

#define all(x) (x).begin(),(x).end()
#define sz(x) (int)(x).size()
#define SOR(x) sort(all(x))
#define SSOR(a,n) sort(a,a+n)
#define REV(x) reverse(all(x))
#define PAR(p,n) iota(p,p+n+1,0)
#define SUM(x) accumulate(all(x),0)
#define _lb lower_bound
#define _ub upper_bound
#define LB(a,x) _lb(all(a),x)
#define UB(a,x) _ub(all(a),x)
#define cbit(x) __built_in_popcount(x)

#define FOE(x,a) for(auto& x : a)
// MAX MIN COMPARE
template<class A> bool umin(A& a,const A& b) { // set min to x
	return a > b?a=b,1:0;
}
template<class A> bool umax(A& a,const A& b) { // set max to x
	return a < b?a=b,1:0;
}
//INPUT
void read(db& x) {
	string s;
	cin >> s;
	x = stod(s);
}
void read(ld& x) {
	string s;
	cin >> s;
	x = stold(s);
}
template<class A> void read(vt<A>& a);
template<class A,class B> void read(P<A,B>& p);
template<class A> void read(A& x) {
	cin >> x;
}
template<class A, class... T> void read(A& x, T& ...t) {
	read(x);
	read(t...);
}
template<class A> void read(vt<A>& a) {
	FOE(x,a) read(x);
}
template<class A, class B> void read(P<A,B>& p) {
	A x;
	B y;
	read(x,y);
	p = make_pair(x,y);
}
// OUTPUT
#define dec(x) cout << fixed << setprecision(x)
template<class A> void print(const A& x) {
	cout << x;
}
template<class A, class... T> void print(const A& a,const T& ...t) {
	print(a);
	print(t...);
}
void pn() {
	print("\n");
}
template<class A,class ...T> void ps(const A&x, const T &...t) {
	print(x);
	if(sizeof ...(t)) print(" ");
	ps(t...);
}
template<class A, class... T> void pn(const A& x, const T& ...t) {
	print(x);
	if(sizeof ...(t)) print("\n");
	pn(t...);
}
// DEBUG
void DBG() {
	cerr << "]" << endl;
}
template<class A, class... T> void DBG(A x, T... t) {
	cerr << x;
	if(sizeof...(t)) cerr << ",";
	DBG(t...);
}
#ifdef LOCAL // -DLOCAL in complie cmd
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "] : [",DBG(__VA_ARGS__)
#else
#define dbg(...)0
#endif
const int mxN = 301;
int qsa[mxN],qsb[mxN],qsza[mxN],qszb[mxN],space[mxN*2];
bool mark[mxN*2];
int main() {
	ios::sync_with_stdio(false),cin.tie(nullptr);
	int n,x,p=1,mx=-1;
	read(n);
	for(int i=1; i<=n; i++) read(x),mark[x]=1,qsa[i] = qsa[i-1]+x,qsza[i] = qsza[i-1] + (x==0);
	for(int i=1; i<=n; i++) read(x),mark[x]=1,qsb[i] = qsb[i-1]+x , qszb[i] = qszb[i-1] + (x==0);
	for(int i=2*n; i>=1; i--) if(!mark[i]) space[p] = space[p-1] + i,p++;
	for(int i=1; i<=n; i++) umax(mx,qsa[i]+qsb[n]-qsb[i-1]+space[qsza[i]+qszb[n]-qszb[i-1]]);
	pn(mx);
	return 0;
}
