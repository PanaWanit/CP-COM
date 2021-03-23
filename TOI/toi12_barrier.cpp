#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define vt vector
#define ar array

#define TA template<class A> void
#define TC template<class A, class... T> void
#define CA const A&x, const T& ...t

#define FOE(x, a) for(auto& x: a)
#define FOR_R(i, s, e, p) for(int i=(s); (p)>0?i<(e):i>=(e); i+=(p))
#define FOR1(e) FOR_R(i, 0, e, 1)
#define FOR2(i, e) FOR_R(i, 0, e, 1)
#define FOR3(i, s, e) FOR_R(i, s, e, 1)
#define FOR4(i, s, e, p) FOR_R(i, s, e, p)
#define ALL5(a, b, c, d, e, ...) e
#define SEL_FOR(...) ALL5(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)
#define FOR(...) SEL_FOR(__VA_ARGS__)(__VA_ARGS__)

TA read(vt<A>& v); TA read(A& x) {cin >> x;} TC read(A& x, T& ...t) {read(x); read(t...);} TA read(vt<A>& v) {FOE(x, v) read(x);}
TA write(const A& x) {cout << x;} TC write(CA) {write(x);write(t...);} void print() {write("\n");} TC print(CA) {write(x); if(sizeof ...(t)) write(" "); print(t...);}
const int mxN =6e6+1;
ll qs[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,w,idx;
	read(n, w);
	FOR(i, 1, n+1) read(qs[i]) , qs[i] += qs[i-1];
	deque<int> dq{0};
	ll mx = 0;
	FOR(i, 1, n+1) {
		while(!dq.empty() && i-dq.front()>w) dq.pop_front();
		while(!dq.empty() && qs[i] < qs[dq.back()]) dq.pop_back();
		dq.push_back(i);
		if(mx < qs[i]-qs[dq.front()]) {
			mx = qs[i]-qs[dq.front()];
			idx = i-dq.front();
		}
		else if(mx == qs[i] - qs[dq.front()]) {
			idx = min(idx, i-dq.front());
		}
	}
	write(mx,"\n",idx,"\n");
	return 0;
}
