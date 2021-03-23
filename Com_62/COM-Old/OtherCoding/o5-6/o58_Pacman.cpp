#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define pq priority_queue
#define vt vector
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define ep emplace
#define dec(x) fixed << setprecision(x);
#define all(x) (a).begin() , (a).end()
#define _lb lower_bound
#define _up upper_bound
/// DBG ///
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
const int mxN = 100 , di[] = {1,-1,0,0} , dj[] = {0,0,1,-1};
string a[mxN];
int disP[mxN][mxN] , disG[mxN][mxN],r,c;
queue<pii> qu;
void bfs(int dis[mxN][mxN]){
	while(!qu.empty()){
		int ni = qu.front().fp , nj = qu.front().sp;
		qu.pop();
		for(int i=0;i<4;i++){
			int ii = ni + di[i] , jj = nj+dj[i];
			if( ii >= r || jj >= c || ii < 0 || jj < 0 ) continue;
			if(a[ii][jj] == '#') continue;
			if(dis[ii][jj] > dis[ni][nj] + 1){
				dis[ii][jj] = dis[ni][nj]+1;
				qu.ep(ii,jj);
			}
		}
	}
}
void solve(){
	int n,t,si,sj;
	cin >> r >> c >> n >> t >> si >> sj;
	memset(disP,0x3f,sizeof(disP));
	memset(disG,0x3f,sizeof(disG));
	for(int i=0;i<n;i++){
		int sii , sjj , tii;
		cin >> tii >> sii >> sjj;
		disG[sii][sjj] = tii;
		qu.ep(sii,sjj);
	}
	for(int i=0;i<r;i++) cin >> a[i];
	bfs(disG);
	disP[si][sj] = 0 , qu.ep(si,sj);
	bfs(disP);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(disP[i][j] <= t && disG[i][j] > t) {cout << "YES\n";return;}
		}
	}
	cout << "NO\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	for(cin >> t;t--;) solve();
	return 0;
}
