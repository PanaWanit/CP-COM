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
const int mxN = 100, di[] = {0, 0, 1, -1, 1, 1, -1, -1}, dj[] = {1, -1, 0, 0, 1, -1, 1, -1};
char a[mxN][mxN];
int d[mxN][mxN];;
priority_queue<pair<int, ar<int,2>>, vt<pair<int, ar<int,2>>>, greater<pair<int, ar<int,2>>>> pq;
int power(const int & a) {
	return a*a;
}
void solve() {
	char mxchar=0;
	int r,c,si,sj,ei,ej;
	read(r, c);
	FOR(r) {
		read(a[i]);
		FOR(j, c) {
			bool ch=0;
			if(isdigit(a[i][j])) ch=umax(mxchar, a[i][j]);
			if(ch) ei = i, ej = j;
		}
	}
	read(si, sj);
	memset(d, 0x3f, sizeof(d));
	d[si][sj] = 0;
	pq.emplace(0, ar<int,2>{si, sj});
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOR(8) {
			int ii = u[0] + di[i], jj = u[1] + dj[i];
			if(ii >= r || jj >=c || ii <0 || jj < 0 || !isdigit(a[ii][jj])) continue;
			int w = power(abs(a[ii][jj]-a[u[0]][u[1]])+1);
			if(d[ii][jj] > p.first+w) {
				d[ii][jj] = p.first+w;
				pq.emplace(d[ii][jj], ar<int,2> {ii, jj});
			}
		}
	}
	print(d[ei][ej]>1e9?"NO":to_string(d[ei][ej]));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int q;
	read(q);
	while(q--) solve();
	return 0;
}
