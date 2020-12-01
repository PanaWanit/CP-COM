#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;
using str = string;
using db = double;
#define vt vector
#define ar array

#define FOE(x, a) for(auto& x: a)
#define FOR_R(i, s, e, p) for(int i=(s); (p)>0?i<(e):i>=(e); i+=(p))
#define FOR1(e) FOR_R(i, 0, e, 1)
#define FOR2(i, e) FOR_R(i, 0, e, 1)
#define FOR3(i, s, e) FOR_R(i, s, e, 1)
#define FOR4(i, s, e, p) FOR_R(i, s, e, p)
#define ALL5(a, b, c, d, e, ...) e
#define SEL_FOR(...) ALL5(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)
#define FOR(...) SEL_FOR(__VA_ARGS__)(__VA_ARGS__)

template<class A> bool umin(A& x, const A& y) {
	return x>y?x=y, 1:0;
}
template<class A> bool umax(A& x, const A& y) {
	return x<y?x=y, 1:0;
}

template<class A> void read(vt<A>& v);
template<class A, size_t SZ> void read(ar<A,SZ>& a);
template<class A, class B> void read(pair<A,B>& p);
template<class A> void read(A& x) {
	cin >> x;
}
template<class A, class... T> void read(A& x, T& ...t) {
	read(x);
	read(t...);
}
template<class A> void read(vt<A>& v) {
	FOE(x, v) read(x);
}
template<class A, size_t SZ> void read(ar<A,SZ>& a) {
	FOE(x, a) read(x);
}
template<class A, class B> void read(pair<A,B>& p) {
	A x; B y;
	read(x, y);
	p = make_pair(x, y);
}

template<class A> void write(const A& x) {
	cout << x;
}
template<class A, class... T> void write(const A& x, const T& ...t) {
	write(x);
	write(t...);
}
void print() {
	write("\n");
}
template<class A, class... T> void print(const A& x, const T& ...t) {
	write(x);
	if(sizeof ...(t)) write("\n");
	print(t...);
}

void DBG() {
	cerr << "]" << endl;
}
template<class A, class ...T> void DBG(A x, T ...t) {
	cerr << x;
	if(sizeof ...(t)) cerr << ", ";
	DBG(t...);
}
#ifdef LOCAL
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] : [",DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
const int mxN = 1e4+1;
int dp[2][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a,b,ans="";
	read(a,b);
	int r = (int)a.size(), c = (int)b.size(),mx=0,st=0;
	FOR(i, 1, r+1) {
		FOR(j, 1, c+1) {
			if(a[i-1] == b[j-1])
				dp[i%2][j] = dp[(i+1)%2][j-1]+1;
			else
				dp[i%2][j] = 0; // off mem
			bool ch=umax(mx, dp[i%2][j]);
			if(ch) st=i-1;
		}
	}
	while(mx--)
		ans += a[st--];
	reverse(ans.begin(), ans.end());
	print(ans);
	return 0;
}
