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
const int mxN = 100, di[] = {0, 0, 1, -1}, dj[] = {1, -1, 0, 0};
int a[mxN][mxN], d[2][mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m,si,sj,ei,ej,hour,minute;
	read(n, m, si, sj, ei, ej);
	scanf("%d:%d", &hour, &minute);
	--si, --sj, --ei, --ej;
	FOR(n)
		FOR(j, m)
			read(a[i][j]);
	priority_queue<pair<int, ar<int,3>>, vt<pair<int,ar<int,3>>>, greater<pair<int,ar<int,3>>>> pq;
	pq.emplace(a[si][sj], ar<int,3>{si, sj, 0});
	memset(d, 0x3f, sizeof(d));
	d[0][si][sj] = a[si][sj];
	while(!pq.empty()) {
		auto p = pq.top();
		auto u = p.second;
		pq.pop();
		FOR(4) {
			int ii = u[0] + di[i], jj = u[1] + dj[i];
			if(ii >= n || jj >=m || ii < 0 || jj < 0) continue;
			if(a[ii][jj] < 0 && !u[2] && d[1][ii][jj] > p.first+a[ii][jj]) {
				d[1][ii][jj] = p.first + a[ii][jj];
				pq.emplace(d[1][ii][jj], ar<int,3>{ii, jj, 1});
			}
			if(d[u[2]][ii][jj] > p.first + abs(a[ii][jj])) {
				d[u[2]][ii][jj] = p.first + abs(a[ii][jj]);
				pq.emplace(d[u[2]][ii][jj], ar<int,3>{ii, jj, u[2]});
			}
		}
	}
	minute += min(d[0][ei][ej], d[1][ei][ej]);
	cout << setw(2) << setfill('0') << ((hour+minute/60+(minute<0?-1:0)+12)%12) << ":";
	cout << setw(2) << setfill('0') << (minute%60+60)%60 << "\n";
	return 0;
}
