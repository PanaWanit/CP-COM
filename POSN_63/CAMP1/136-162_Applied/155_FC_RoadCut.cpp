#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int a[mxN][mxN], b[mxN][mxN];
int dpS_r[mxN], dpS_c[mxN];
int dpE_r[mxN], dpE_c[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int r,c,sum=0,mx=-1;
	cin >> r >> c;
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> a[i][j];
			dpS_r[i]+=a[i][j];
			sum += a[i][j];
		}
	}
	for(int i=1; i<=r; ++i) {
		for(int j=1; j<=c; ++j) {
			cin >> b[i][j];
			dpE_r[i]+=b[i][j];
		}
	}
	for(int j=1; j<=c; ++j) {
		for(int i=1; i<=r; i++)
			dpS_c[j] += a[i][j], dpE_c[j] += b[i][j];
	}
	//rowcut
	for(int i=1; i<=r; ++i) {
		mx = max(mx, sum-dpS_r[i]+dpE_r[i+1]+dpE_r[i-1]);
	}
	for(int i=1; i<=c; ++i) {
		mx = max(mx, sum-dpS_c[i]+dpE_c[i+1]+dpE_c[i-1]);
	}
	cout << mx << "\n";
	return 0;
}


