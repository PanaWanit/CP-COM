/*
 	TASK : Bipartite Graph with query
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : N/a
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1; // node 1,2,3,4,....,n
int color[mxN]; // not visited = 0 , first color = 1 , second color 2
vector<int> g[mxN]; // store edge
bool dfs(int u, int now){ // now = now color 1,2(first or second color)
	if(color[u]==now) return 1; // check 1.Have color 2.Same Node color => return true
	if(color[u] && color[u] != now) return 0; // Not same color return false
	color[u] = now; // set u node color = nowcolor
	for(auto& x : g[u]){
		if(!dfs(x,3-now)) return 0; //if the next node cant paint another color return false // next color 3-c => 3-1=2 , 3-2=1
	}
	return 1; // no wrong test then return true
}
void solve() {
	int node,edge;
	cin >> node >> edge;
	while(edge--){
		int u,v;
		cin >> u >> v;
		g[u].push_back(v) , g[v].push_back(u);
	}
	bool isbp;
	for(int i=1; i<=node; i++) {
		if(!color[i]) isbp = dfs(i,1); //paint node i with color 1
		if(!isbp) break; // not bipartite graph then break
	}
	if(!isbp) cout << "Not Bipartite Graph\n";
	else cout << "Bipartite Graph\n";
	//clear edge and color
	fill_n(g+1,node,vector<int>());
	memset(color,0,(node+1)*sizeof(color[0]));
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	int query;
	for(cin >> query; query--;) solve();
	return 0;
}
