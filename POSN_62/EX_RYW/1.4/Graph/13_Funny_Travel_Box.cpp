#include<bits/stdc++.h>
using namespace std;
const int mxN = 40, dir[]={2, -1}, rdir[]={1, -1};
int r,c;
bool a[mxN][mxN], vis[mxN][mxN];
void dfs(int i, int j) {
	if(vis[i][j]) return;
	if(i==r-2) {
		cout << "yes\n";
		exit(0);
	}
	vis[i][j]=1;
	for(int k=0; k<2; k++) {
		int ii=i+dir[k];
		if(ii>=r||ii<0) continue;
		if(a[ii][j]||a[ii][j+1]) continue;
		dfs(i+rdir[k], j);
	}
	for(int k=0; k<2; k++) {
		int jj=j+dir[k];
		if(jj>=c||jj<0) continue;
		if(a[i][jj]||a[i+1][jj]) continue;
		dfs(i, j+rdir[k]);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	char in;
	cin >> r >> c;
	for(int i=0; i<r; i++) {
		for(int j=0; j<c; j++) {
			cin >> in;
			a[i][j]=(in=='#'?1:0);
		}
	}
	for(int j=0; j<c-1; j++) {
		if(!a[0][j] and !a[0][j+1] and !a[1][j] and !a[1][j+1]) {
			dfs(0, j);
		}
	}
	cout << "no\n";
	return 0;
}
