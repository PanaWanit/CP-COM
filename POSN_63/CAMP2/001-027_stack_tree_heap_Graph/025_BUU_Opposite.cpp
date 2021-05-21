#include<bits/stdc++.h>
using namespace std;
struct Graph{int ai,aj,bi,bj;};
const int mxN = 33, di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
char a[mxN][mxN];
int d[mxN][mxN][mxN][mxN], all_pair[mxN][mxN][mxN][mxN];
void query() {
	int r,c,sai,saj,sbi,sbj,ans=2e9,cs=2e9;
	cin >> r >> c;
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='A') sai=i, saj=j;
			if(a[i][j]=='B') sbi=i, sbj=j;
		}
	}
	queue<pair<int,int>> bfs;
	memset(all_pair, -1, sizeof(all_pair));
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j) {
			bfs.push({i, j});
			all_pair[i][j][i][j]=0;
			while(!bfs.empty()) {
				int ni = bfs.front().first, nj = bfs.front().second;
				bfs.pop();
				for(int k=0; k<4; ++k) {
					int ii = ni+di[k], jj = nj+dj[k];
					if(ii>=r||jj>=c||ii<0||jj<0) continue;
					if(a[ii][jj]=='#' || all_pair[i][j][ii][jj]!=-1) continue;
					all_pair[i][j][ii][jj] = all_pair[i][j][ni][nj]+1;
					bfs.push({ii, jj});
				}
			}

		}
	}
	if(all_pair[sai][saj][sbi][sbj]==-1) {
		cout << "-1 0\n";
		return;
	}
	memset(d, -1, sizeof(d));
	d[sai][saj][sbi][sbj]=0;
	queue<Graph> qu;
	qu.push({sai, saj, sbi, sbj});
	while(!qu.empty()) {
		Graph t = qu.front();
		qu.pop();
		int nai=t.ai, naj=t.aj, nbi=t.bi, nbj=t.bj, nx=d[nai][naj][nbi][nbj]+1;
		if( abs(nai-nbi)+abs(naj-nbj)<= cs) {
			if(all_pair[nai][naj][nbi][nbj]<cs) {
				cs=all_pair[nai][naj][nbi][nbj];
				ans=nx-1;
			}
			else if(all_pair[nai][naj][nbi][nbj]==cs) {
				ans=min(ans, nx-1);
			}
		}
		for(int i=0; i<4; ++i) {
			int iia = nai+di[i], jja=naj+dj[i], cana=1;
			int iib = nbi-di[i], jjb=nbj-dj[i], canb=1;
			if(iia>=r||jja>=c||iia<0||jja<0) cana=0;
			if(iib>=r||jjb>=c||iib<0||jjb<0) canb=0;
			if(a[iia][jja]=='#') cana=0;
			if(a[iib][jjb]=='#') canb=0;
			if(cana&&canb) {
				if(d[iia][jja][iib][jjb]!=-1) continue;
				d[iia][jja][iib][jjb]=nx;
				qu.push({iia, jja, iib, jjb});
			}
			else if(cana&&!canb) {
				if(d[iia][jja][nbi][nbj]!=-1) continue;
				d[iia][jja][nbi][nbj]=nx;
				qu.push({iia, jja, nbi, nbj});
			}
			else if(!cana&&canb) {
				if(d[nai][naj][iib][jjb]!=-1) continue;
				d[nai][naj][iib][jjb]=nx;
				qu.push({nai, naj, iib, jjb});
			}
		}
	}
	cout << cs << " " << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}
