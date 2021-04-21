#include<bits/stdc++.h>
using namespace std;
int dis(int a, int b, int c) {
	return a*a+b*b+c*c;
}
const int mxN = 25;
bool vis[mxN];
int n,mn=2e9,a[mxN],m;
int X[mxN], Y[mxN], Z[mxN], mouse[mxN], keyboard[mxN], monitor[mxN];
void dfs(int x, int y, int z, int now_mouse, int now_keyboard, int now_monitor, int money) {
	if(now_mouse>=n&&now_keyboard>=n&&now_monitor>=n) {
		mn=min(money, mn);
		return ;
	}
	for(int i=0; i<m; ++i) {
		if(vis[i]) continue;
		vis[i]=1;
		dfs(X[i], Y[i], Z[i], now_mouse+mouse[i], now_keyboard+keyboard[i], now_monitor+monitor[i], money+dis(x-X[i], y-Y[i], z-Z[i]));
		vis[i]=0;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int x,y,z;
	cin >> n >> x >> y >> z >> m;
	for(int i=0; i<m; ++i)
		cin >> X[i] >> Y[i] >> Z[i] >> monitor[i] >> keyboard[i] >> mouse[i];
	dfs(x,y,z,0,0,0,0);
	cout << mn << "\n";
	return 0;
}
