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

const int mxN = 1e5;
int p[mxN];
int fr(int i) {
	if(i == p[i]) return i;
	return p[i] = fr(p[i]);
}
pair<ll, int> lan[3][mxN];
vector<pair<ll,ar<int,2>>> a;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	read(n);
	FOR(n) {
		p[i] = i;
		read(lan[0][i].first, lan[1][i].first, lan[2][i].first);
		lan[0][i].second = lan[1][i].second = lan[2][i].second = i;
	}
	FOR(3)
		sort(lan[i], lan[i]+n);
	FOR(3) {
		FOR(j, n) {
			a.emplace_back(abs(lan[i][j].first-lan[i][j+1].first), ar<int,2>{lan[i][j].second, lan[i][j+1].second});
		}
	}
	sort(a.begin(), a.end());
	ll ans=0;
	FOE(x, a) {
		int u = fr(x.second[0]) , v = fr(x.second[1]);
		if(u != v) {
			p[u] = v;
			ans += x.first;
		}
	}
	print(ans);
	return 0;
}
