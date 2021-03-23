#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define ep emplace
#define dec(x) fixed << setprecision(x);
#define SZ(x) (int)(x).size()
#define pq priority_queue
#define _lb lower_bound
#define _up upper_bound
#define mp make_pair
#define pq priority_queue
void DBG(){ cerr << "]" << endl; }
template<class A,class... T> void DBG(A h , T... t){
    cerr << h;
    if(sizeof ...(t)) cerr << ", ";
    DBG(t...);
}
#ifdef LOCAL // -D LOCAL
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif
const int mxN = 301;
int p[mxN];
int fr(int i){
	if(p[i] == i) return i;
	return p[i] = fr(p[i]);
}
pip a[mxN*(mxN-1)/2] , *it = &a[0];
int in[mxN];
int main(){
   ios::sync_with_stdio(0),cin.tie(0);
	int n,t;
	cin >> n >> t;
	iota(p,p+n,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int x;
		 	cin >> x;
		 	if( i > j ) it->fp= i+1 , it->sp.fp = j+1 , it++->sp.sp = x;
	 	}
	}
	int mx = -2e9 , z;
	sort(a,a+( n*(n-1)/2),[] (const pip& a , const pip& b) {return a.sp.sp < b.sp.sp;}); 
	for(int i=0;i<n*(n-1)/2;i++){
		int u = fr(a[i].fp) , v = fr(a[i].sp.fp);
		if(u != v){
			p[u] = v;
			++in[a[i].fp] , ++in[a[i].sp.fp];
			if(in[a[i].fp] > mx) mx = in[a[i].fp] , z = a[i].fp;
			if(in[a[i].sp.fp] > mx) mx = in[a[i].sp.fp] , z = a[i].sp.fp;
		}
	}
	cout << z << "\n";
	if(t==2) cout << mx << "\n";
	return 0;
}
