/*
  TASK: toi7_food
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
const int mxN = 10;
bool mark[mxN] , used[mxN];
int n,ans[mxN];
void permu(int state){
	if(state==n){
		for(int i=0;i<n;i++){
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for(int i=1;i<=n;i++){
		if((mark[i] && state==0) || used[i]) continue;
		used[i] = 1;
		ans[state] = i;
		permu(state+1);
		used[i] = 0;
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int m;
	cin >> n >> m;
	while(m--){
		int x;cin >>x;
		mark[x] = 1;
	}
	permu(0);
	return 0;
}
