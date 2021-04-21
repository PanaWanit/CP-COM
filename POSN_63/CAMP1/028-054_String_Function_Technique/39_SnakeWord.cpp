#include<bits/stdc++.h>
using namespace std;
const int mxN = 110, di[]={1, -1, 0, 0}, dj[]={0, 0, 1, -1};
char a[mxN][mxN], f[mxN];
int sq[mxN][2],n,m,f_sz;
bool vis[mxN][mxN],ch;
void dfs(int ni, int nj,int st) {
	sq[st][0]=ni, sq[st][1]=nj;
	if(st==f_sz-1) {
		for(int i=0; i<=st; ++i)
			cout << sq[i][0]+1 << " " << sq[i][1]+1 << "\n";
		ch=1;
	}
	for(int i=0; i<4; ++i) {
		int ii = ni+di[i], jj = nj+dj[i];
		if(ii>=n||jj>=m||ii<0||jj<0) continue;
		if(a[ii][jj]!=f[st+1]||vis[ii][jj]) continue;
		vis[ii][jj]=1;
		dfs(ii, jj, st+1);
		vis[ii][jj]=0;
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> n >> m;
	for(int i=0; i<n; ++i)
		for(int j=0; j<m; ++j)
			cin >> a[i][j], a[i][j]=tolower(a[i][j]);
	int t;
	cin >> t;
	while(t--) {
		ch=0;
		cin >> f;
		for(int i=0; f[i]; ++i) f[i]=tolower(f[i]);
		f_sz=strlen(f);
		for(int i=0; i<n; ++i) {
			for(int j=0; j<m; ++j) {
				if(a[i][j]!=f[0]) continue;
				vis[i][j]=1;
				dfs(i, j, 0);
				vis[i][j]=0;
			}
		}
		if(!ch) cout << "No Matching Word\n";
	}
	return 0;
}
