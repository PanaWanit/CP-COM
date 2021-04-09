#include<bits/stdc++.h>
using namespace std;
const int mxN = 105, di[]={1, -1};
int l[mxN], r[mxN], h[mxN],cnt,n;
bool vis[mxN];
void dfs(int p) {
	++cnt;
	for(int i=1; i<n; i++) {
		if(vis[i]) continue;
		if(l[i]>r[p]) continue;
		for(int k=0; k<2; k++) {
			if(h[p]+di[k]==h[i]) {
				vis[i]=1;
				dfs(i);
				vis[i]=0;
			}
		}
	}
}
void solve() {
	scanf("%d", &n);
	cnt=0;
	for(int i=0; i<n; i++)
		scanf("%d %d %d", &h[i], &l[i], &r[i]);
	dfs(0);
	printf("%d\n", cnt);
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}

