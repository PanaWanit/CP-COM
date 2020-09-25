/*
 	TASK : toi11 place
	AUTHOR : Pana Wanit
	LANG : C++17
	SCHOOL : N/a
 */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(),(x).end()
const int mxN = 2e5+1 , mxM = 1e6;
int p[mxN];
pip a[mxM];
int fr(int i){
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int n,m;
	ll ans=0;
	cin >> n >> m;
	iota(p+1,p+1+n,1);
	for(int i=0; i<m; i++){
		cin >> a[i].sp.fp >> a[i].sp.sp >> a[i].fp;
		--a[i].fp;
	}
	sort(a,a+m,greater<pip>());
	for(int i=0; i<m; i++) {
		int u = fr(a[i].sp.fp) , v = fr(a[i].sp.sp);
		if(u != v) {
			p[u] = v;
			ans += a[i].fp;
		}
	}
	cout << ans << "\n";
	return 0;
}
