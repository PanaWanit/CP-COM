/*
 	TASK : Array Walk (BFS , DFS)
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii; // first i , second j
const int mxN = 1000;
char table[mxN][mxN];
const int diR[] = {1,-1,0,0} , diC[] = {0,0,1,-1}; // distance Row and Column
int r,c,start_i,start_j,end_i,end_j;
//DFS
int mx[mxN][mxN];
void dfs(int ni,int nj){
	for(int i=0; i<4; i++){
		int nexti = ni + diR[i] , nextj = nj + diC[i];
		if(nexti >= r || nextj >= c || nexti < 0 || nextj < 0) continue; //out of table
		if(table[nexti][nextj] == '#') continue; //cant walk
		if(mx[ni][nj]+1 >= mx[nexti][nextj]) continue;
		mx[nexti][nextj] = mx[ni][nj]+1;
		dfs(nexti,nextj);
	}
}
//BFS
int dis[mxN][mxN];
void bfs(){
	queue<pii> q;
	memset(dis,-1,sizeof(dis)); // -1 = not visited
	q.emplace(start_i,start_j);
	dis[start_i][start_j] = 0;
	while(!q.empty()){
		pii now = q.front();
		q.pop();
		for(int i=0; i<4; i++){
			int nexti = now.first + diR[i] , nextj = now.second + diC[i];
			if( nexti >= r || nextj >= c || nexti < 0 || nextj < 0 ) continue;
			if(table[nexti][nextj] == '#' || dis[nexti][nextj] != -1) continue;
			dis[nexti][nextj] = dis[now.first][now.second] + 1;
			q.emplace(nexti,nextj);
		}
	}
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> r >> c;
	for(int i=0; i<r; i++){
		for(int j=0; j<c; j++){
			cin >> table[i][j];
		}
	}
	cin >> start_i >> start_j >> end_i >> end_j;
	memset(mx,0x3f,sizeof(mx)); 
	mx[start_i][start_j] = 0;
	dfs(start_i,start_j);
	cout << "DFS: " << mx[end_i][end_j] << "\n";
	bfs();
	cout << "BFS: " << dis[end_i][end_j] << "\n";
	return 0;
}
/*  Extra :
	border of table go to another border (0 -> r-1 , r-1 -> 0 , 0 -> c-1 , c-1 -> 0); * can use only start idx = 0
	int nexti = (now.first + diR[i] + r)%r , nextj = (now.second + diC[i] + c)%c 
	(you dont need to check border => if(nexti >= r || nextj >= c || nexti < 0 || nextj < 0)) 
	Why plus r or c before mod?
	if now.first + diR[i] is negative number you can add r and then mod r
 	(a+b)%c = (a+b+0)%c = (a%c + b%c + c%c)%c = (a+b+c)%c alway be positive :)
*/
