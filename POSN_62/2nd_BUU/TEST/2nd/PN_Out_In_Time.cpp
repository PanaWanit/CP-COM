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
string a[30];
const int di[] = {0, 0, 1, -1} , dj[] = {1, -1, 0, 0};
int d[30][30];
void solve() {
	int r,c,t,si,sj,ei,ej;
	read(r, c, t);
	FOR(r) read(a[i]);
	read(si, sj, ei, ej);
	--si, --sj, --ei, --ej;
	queue<pair<int,int>> qu;
	memset(d,-1,sizeof(d));
	d[si][sj] = 0;
	qu.emplace(si, sj);
	while(!qu.empty()) {
		auto p = qu.front();
		int ni = p.first , nj = p.second;
		qu.pop();
		FOR(4) {
			int ii = ni+di[i], jj = nj+dj[i];
			if(ii >= r || jj >= c || ii <0 || jj <0) continue;
			if(d[ii][jj] != -1 || a[ii][jj] == '#') continue;
			d[ii][jj] = d[ni][nj] + 1;
			qu.emplace(ii, jj);
		}
	}
	if(d[ei][ej] > t) {
		print(-1);
		return;
	}
	int cnt = 0;
	FOR(r) {
		FOR(j, c) {
			if(d[i][j] != -1) cnt++;
		}
	}
	if((cnt-d[ei][ej]-1)*2 <= t-d[ei][ej]) print(cnt); // t-d[ei][ej] = energy left , cnt-d[ei][ej]-1 = block left
	else print(d[ei][ej]+1+(int)((t-d[ei][ej])/2)); 
	//d[ei][ej]+1 = number of block in shortest path
	// |_ (t-d[ei][ej])/2 _| number of block you can walk
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	read(t);
	while(t--) solve();
	return 0;
}
