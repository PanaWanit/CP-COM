#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e3+10;
char a[mxN][mxN];
int L[mxN][mxN], U[mxN][mxN], D[mxN][mxN], R[mxN][mxN];
void query() {
	int r,c;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> a[i][j];
			if(a[i][j]=='1') R[i][j] = R[i][j-1]+1;
			else R[i][j]=0;
		}
		for(int j=c; j>=1; --j) {
			if(a[i][j]=='1') L[i][j] = L[i][j+1]+1;
			else L[i][j]=0;
		}
	}
	for(int j=0; j<=c; ++j) {
		for(int i=1; i<=r; ++i) {
			if(a[i][j]=='1') D[i][j] = D[i-1][j]+1;
			else D[i][j]=0;
		}
		for(int i=r; i>=1; --i) {
			if(a[i][j]=='1') U[i][j] = U[i+1][j]+1;
			else U[i][j]=0;
		}
	}
	int mx=0;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			if(a[i][j]=='0') continue;
			mx = max({mx, U[i][j]+L[i][j]-1, U[i][j]+R[i][j]-1, D[i][j]+L[i][j]-1, D[i][j]+R[i][j]-1 });
		}
	}
	memset(U, 0, sizeof(U));
	memset(D, 0, sizeof(D));
	memset(L, 0, sizeof(L));
	memset(R, 0, sizeof(R));
	cout << mx << "\n";
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int Q;
	cin >> Q;
	while(Q--)
		query();
	return 0;
}

