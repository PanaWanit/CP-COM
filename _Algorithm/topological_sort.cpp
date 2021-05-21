/*
	Task: Topological Sort
	Author: Pana Wanit
	Lang: C++17
	School: N/a
*/
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5;
priority_queue<int,vector<int>,greater<int>> pq; // min heap
vector<int> g[mxN];
int in[mxN]; // number of parent
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int node, edge;
	cin >> node >> edge;
	while(edge--){
		int u,v;
		cin >> u >> v ;
		g[u].push_back(v);
		++in[v];
	}
	for(int i=0; i<node; i++) {
		if(in[i] == 0) pq.push(i); // push no parent node
	}	
	while(!pq.empty()) {
		int n = pq.top();
		cout << n << " ";
		pq.pop();
		for(const int& x:g[n]){
			--in[x]; // remove child from n node
			if(in[x] == 0) pq.push(x); // no parent node push in heap
		}
	}
	return 0;
}
