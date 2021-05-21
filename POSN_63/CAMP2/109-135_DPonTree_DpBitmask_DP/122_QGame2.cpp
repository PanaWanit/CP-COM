#include<bits/stdc++.h>
using namespace std;
const int mxN=210;
long long mn[mxN][mxN], mx[mxN][mxN], a[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j)
			cin >> a[i][j];
	}
	memset(mn, 0x3f, sizeof(mn));
	mn[r][0]=0;
	for(int i=r; i>=1; --i) {
		for(int j=1; j<=c; ++j) {
			mx[i][j] = a[i][j]+max(mx[i+1][j], mx[i][j-1]);
			mn[i][j] = a[i][j]+min(mn[i+1][j], mn[i][j-1]);
		}
	}
	cout << mx[1][c]-mn[1][c] << "\n";
	return 0;
}

