/*
	Task: Minimum Spanning Tree
	Author: Pana Wanit
	Lang: C++17
	School: N/a
 */
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
const int mxN = 1005 , mxE = mxN*(mxN-1)/2; // max edge number of node choose 2
pip g[mxE]; // first = weight , second.first,second.second = node
// using pq => priority_queue<pip,vector<pip>,greater<pip>>
int p[mxN];
int find_root(int i) { 
	if(p[i] == i) return i;
	return p[i] = find_root(p[i]);
}//DSU => same set => don't need to union
int main(){
	ios::sync_with_stdio(0) , cin.tie(0);
	int node , edge , ans=0;
	cin >> node >> edge;
	iota(p,p+node,0);
	for(int i=0;i<edge;i++){
		cin >> g[i].second.first >> g[i].second.second >> g[i].first; // u , v , w
	}
	sort(g,g+edge);
	//sort(g,g+edge,greater<pair<int,pair<int,int>>>()) -> Maximum Spanning Tree
	for(int i=0;i<edge;i++){
		int u = find_root(g[i].second.first) , v = find_root(g[i].second.second) , w = g[i].first;	
		if(u!=v) {
			p[u] = v;
			ans += w;
		}
	}
	cout << ans << "\n";
	return 0;
}

