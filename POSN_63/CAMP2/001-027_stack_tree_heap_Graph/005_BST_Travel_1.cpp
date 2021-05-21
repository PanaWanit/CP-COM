#include<bits/stdc++.h>
using namespace std;
const int mxN = 1<<23;
int tree[mxN];
void pre(int i) {
	if(!tree[i]) return;
	cout << tree[i] << "\n";
	pre(2*i);
	pre(2*i+1);
}
void pos(int i) {
	if(!tree[i]) return;
	pos(2*i);
	pos(2*i+1);
	cout << tree[i] << "\n";
}
void in(int i) {
	if(!tree[i]) return;
	in(2*i);
	cout << tree[i] << "\n";
	in(2*i+1);
}
void bfs(int i) {
	for(int i=1; i<mxN; ++i)
		if(tree[i]) cout << tree[i] << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	string a;
	int n,now;
	cin >> a >> n;
	for(int i=0,x; i<n; ++i) {
		cin >> x;
		now=1;
		while(tree[now]!=0) {
			if(x<tree[now]) now=2*now;
			else now=2*now+1;
		}
		tree[now]=x;
	}
	if(a[1]=='R') pre(1);
	if(a[1]=='O') pos(1);
	if(a[1]=='N') in(1);
	if(a[1]=='F') bfs(1);
	return 0;
}
