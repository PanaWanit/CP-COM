#include<bits/stdc++.h>
using namespace std;
const int mxN = 300*300;
int tree[mxN];
void pre(int u=1) {
	if(tree[u]==0) return;
	cout << tree[u] << " ";
	pre(u*2);
	pre(u*2+1);
}
void post(int u=1) {
	if(tree[u]==0) return;
	post(u*2);
	post(u*2+1);
	cout << tree[u] << " ";
}
void in(int u=1) {
	if(tree[u]==0) return;
	in(u*2);
	cout << tree[u] << " ";
	in(u*2+1);
}
void bfs(int u=1) {
	queue<int> qu;
	qu.push(u);
	while(!qu.empty()) {
		int x = qu.front();
		qu.pop();
		if(tree[x] == 0) continue;
		qu.push(2*x), qu.push(2*x+1);
		cout << tree[x] << " ";
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		int idx=1;
		while(tree[idx]!=0) {
			if(x>tree[idx])
				idx = 2*idx+1;
			else idx = 2*idx;
		}
		tree[idx] = x;
	}
	pre();
	cout << "\n";
	in();
	cout << "\n";
	post();
	cout << "\n";
	bfs();
	return 0;
}
