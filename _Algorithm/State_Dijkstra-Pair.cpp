/*
	Task: Dijkstra Algorithm with state using pair
	Author: Pana Wanit
	Lang: C++17
	School: N/a
*/
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
const int mxN = 1e5+1 , mxState = 10; // have n state mxState = n+1 (include state==0)
vector<pii> g[mxN]; // store edge(first) and weight(second)
int dis[mxState][mxN]; //Weight of Node for any state
bool mark[mxState][mxN]; //First visited = lowest weight
priority_queue<pip,vector<pip>,greater<pip>> pq; // first = weight , second.first = node , second.second = state
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int node , edge , state , start ,end;
	cin >> node >> edge >> state >> start >> end;
	memset(dis,0x3f,sizeof(dis)); //set inf(more than 1e9)
	/*
	 or
	 for(int i=0; i<=state; i++) for(int j=0; j<node; j++) dis[i][j] = 1e9+1; // node 0,1,2,..,node-1
	 or
	 fill(dis[0],dis[state],1e9+1);
	*/
	while(edge--){
		int u,v,w;
		cin >> u >> v >> w;
		g[u].emplace_back(v,w);
		//g[v].emplace_back(u,w); // (undirected graph)
	}
	// set start node
	dis[0][start] = 0;
	pq.emplace(0,pii(start,0)); // first = weight in start node(0) , second.first = node , second.second = start state
	while(!pq.empty()){
		int u = pq.top().second.first , now_state = pq.top().second.second;
		pq.pop();
		if(mark[now_state][u]) continue;
		mark[now_state][u] = 1;
		for(auto& x : g[u]){ //graph travel (u)
			for(int i=0; i<=1; i++){
				if(now_state+i <= state && dis[now_state+i][x.first] > dis[now_state][u] + (i==1?x.second/2:x.second) ){
					dis[now_state+i][x.first] = dis[now_state][u] + (i==1?x.second/2:x.second);
					pq.emplace(dis[now_state+i][x.first] , pii(x.first,now_state+i));
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
	fill_n(g,node,vector<pii>()); // clear vector each query
	memset(mark,0,sizeof(mark)); // clear visited node,state
	return 0;
}
/* 
 * use
 * #define fp first // use fp instead first
 * #define sp second // use sp instead second
 **/
