/*
	Task: Dijkstra Algorithm with state using Struct
	Author: Pana Wanit
	Lang: C++17
	School: N/a 
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
	int v,w,state;
	bool operator < (const A&o) const {
		return w > o.w; //using Min Heap
	}
};
const int mxN = 1e5+1 , mxState = 10;
vector<A> g[mxN]; // store edge and weight
int dis[mxState][mxN]; //Weight of Node for any state
bool mark[mxState][mxN]; //First visited = lowest weight
priority_queue<A> pq; //Min Heap
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int node , edge , state , start ,end;
	cin >> node >> edge >> state >> start >> end;
	memset(dis,0x3f,sizeof(dis)); //set inf(more than 1e9)
	/*
	 or
	 for(int i=0; i<state; i++) for(int j=0; j<node; j++) dis[i][j] = 1e9+1; // node 0,1,2,..,node-1
	 or
	 fill(dis[0],dis[state],1e9+1);
	*/
	while(edge--){
		int u,v,w;
		cin >> u >> v >> w;
		g[u].push_back({v,w});
		//g[v].push_back({u,w}) // (undirected graph)
	}
	// set start node
	dis[0][start] = 0;
	pq.push({start,0,0}); // v = start node , w = weight in start node(0) , state = start state
	while(!pq.empty()){
		int u = pq.top().v , now_state = pq.top().state;
		pq.pop();
		if(mark[now_state][u]) continue;
		mark[now_state][u] = 1;
		for(auto& x : g[u]){ //graph travel (u)
			for(int i=0; i<=1; i++){
				if(now_state+i <= state && dis[now_state+i][x.v] > dis[now_state][u] + (i==1?x.w/2:x.w) ){
					dis[now_state+i][x.v] = dis[now_state][u] + (i==1?x.w/2:x.w);
					pq.push({ x.v , dis[now_state+i][x.v] , now_state+i});
				}
			}
		}
	}	
	int ans = 1e9;
	for(int i=0; i<=state; i++){
		ans = min(dis[i][end],ans); 
	}
	if(ans == 1e9) cout << "Error"; // doesn't visited end node
	else cout << ans;
	fill_n(g,g+node,vector<pii>()); // clear vector each query
	memset(mark,0,sizeof(mark)); // clear visited node,state
	return 0;
}
