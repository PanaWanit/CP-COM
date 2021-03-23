#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double db;
typedef string str;
typedef long double ld;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef pair<int,pii> piii;

#define pq(x) priority_queue<x>
#define lpq(x) priority_queue<x,vector<x>,greater<x>>
#define vt(x) vector<x>
#define omap unordered_map

#define all(a) (a).begin(),(a).end()
#define pb push_back
#define eb emplace_back
#define dec(x) cout << fixed << setprecision(x)
#define _lb(a,x) lower_bound(all(a),x);
#define _ub(a,x) upper_bound(all(a),x);

#define fp first
#define sp second

void use_ios(){ios::sync_with_stdio(0);cin.tie(0);}
const int mxN = 1e5;
vt(pii) g[mxN];
int dis[2][mxN];
lpq(piii) he;
bool mark[2][mxN];
int main(){
	use_ios();
	int n,m,s,e,sum=0;
	cin >> n >> m >> s >> e;
	while(m--){
		int u,v,w;
		cin >> u >> v >> w;
		g[u].eb(v,w);
		g[v].eb(u,w);
		sum+=w;
	}
	memset(dis,0x3f,sizeof dis);
	dis[0][s] = 0;	
	he.emplace(0,pii(s,0));
	while(!he.empty()){
		int u = he.top().sp.fp , t = he.top().sp.sp;
		he.pop();
		if(mark[t][u]) continue;
		mark[t][u] = 1;
		for(pii& x:g[u]){
			if(dis[t][x.fp] > dis[t][u]+x.sp){
				dis[t][x.fp] = dis[t][u]+x.sp;
				he.emplace(dis[t][x.fp] ,pii(x.fp,t));
			}
			if(!t && dis[1][x.fp] > dis[0][u]){
				dis[1][x.fp] = dis[0][u];
				he.emplace(dis[1][x.fp],pii(x.fp,1));
			}
		}
	}
	cout << sum - dis[1][e];
	
 	return 0;  
}
/*
	TASK: God of War
	AUTHOR: ppnw~!
	LANG: CPP , C++
	SCHOOL: R_____W________M
	TXTEDITOR: VScode
*/
 

