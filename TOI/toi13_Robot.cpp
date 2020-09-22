/*
  TASK: toi13_robot
  AUTHOR: pnawn_
  LANG: C++14
  SCHOOL: N/a
  EDITOR: Gvim
*/
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
queue<pii> qu;
const int mxN = 2001 , di[] = {1,-1,0,0} , dj[] = {0,0,1,-1};
int dis[mxN][mxN];
char a[mxN][mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	vector<pii> ls;
	cin >> n >> m;
	memset(dis,0x3f,sizeof(dis));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
			if(a[i][j] == 'X') qu.ep(i,j) , dis[i][j] = 0;
			else if(a[i][j] == 'A') ls.eb(i,j);
		}
	}
	while(!qu.empty()){
		int ni = qu.front().fp , nj = qu.front().sp;
		qu.pop();
		for(int i=0;i<4;i++){
			int ii = ni + di[i] , jj = nj + dj[i];
			if(ii >= n || jj >= m || ii < 0 || jj < 0) continue;
			if(a[ii][jj] == 'W') continue;
			if(dis[ii][jj] <= dis[ni][nj]+1) continue;
			dis[ii][jj] = dis[ni][nj]+1;
			qu.ep(ii,jj);
		}
	}
	int cnt=0 , ans=0;
	for(const pii& x: ls){
		if(dis[x.fp][x.sp] > 1e9) continue;
		//dbg(x.fp,x.sp,dis[x.fp][x.sp]);
		cnt++ , ans += dis[x.fp][x.sp]*2;
	}
	cout << cnt << " " << ans;
	return 0;
}
