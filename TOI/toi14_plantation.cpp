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
TA read(vt<A>& v); template<class A, size_t SZ> void read(ar<A,SZ>& a); 
template<class A, class B> void read(pair<A,B>& p);
TA read(A& x) {cin >> x;}  TC read(A& x, T& ...t) {read(x); read(t...);} 
template<class A, class B> void read(pair<A,B>& p) { A x;B y;read(x,y); p =make_pair(x, y);}
template<class A, size_t SZ> void read(ar<A, SZ>& a) {FOE(x, a) read(x);}
TA read(vt<A>& v) {FOE(x, v) read(x);}
TA write(const A& x) {cout << x;} 
TC write(CA) {write(x);write(t...);} 
void print() {write("\n");} TC print(CA) {write(x); if(sizeof ...(t)) write(" "); print(t...);}
void DBG() {cerr << "]" << endl;} TC DBG(A x, T ...t) {cerr << x; if(sizeof ...(t)) cerr << ", " ; DBG(t...);}
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
int n,r,d;
const int mxN = 1e5;
const db INF = 2e9;
pair<int,int> a[mxN];
double dist(pair<int,int> a, pair<int,int> b) {
	return sqrt(1.0*(a.first-b.first)*(a.first-b.first) + 1.0*(a.second-b.second)*(a.second-b.second));
}
double closet(pair<int,int> b[], int n) {
	double mi=INF,dl,dr,d,o=INF;
	if(n <= 3) {
		FOR(n) {
			FOR(j, i+1, n) {
				umin(mi, dist(b[i], b[j]));
			}
		}
		return mi;
	}
	int mid = n/2;
	dl = closet(b, mid) , dr = closet(b+mid, n-mid), d = min(dl, dr);
	pair<int,int> strip[n+2];
	int p=0;
	FOR(n) {
		if(abs(b[i].first-b[mid].first) < d) strip[p++] = b[i];
	}
	sort(strip, strip+p, [] (const auto& a, const auto& b) {return a.second < b.second;});
	o=d;
	FOR(p) {
		for(int k = i+1; k<p&&strip[k].second-strip[i].second<=o; k++) umin(d, dist(strip[i], strip[k]));
	}
	return d;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	read(t);
	while(t--) {
		read(n, r, d);
		FOR(n) read(a[i]);
		sort(a, a+n);
		db dis=closet(a, n);
		print(dis>=d+2*r?"Y":"N");
	}
	return 0;
}
