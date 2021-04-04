#include<bits/stdc++.h>
using namespace std;
const int mxN = 1010;
int dpL[mxN][mxN], dpR[mxN][mxN], dpD[mxN][mxN], dpU[mxN][mxN], a[mxN][mxN];
void solve() {
	int r,c;
	char inp;
	scanf("%d %d", &r, &c);
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			scanf(" %c", &inp);
			a[i][j]=(int)(inp-'0');
		}
	}
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			dpL[i][j] = (dpL[i][j-1]+a[i][j])*a[i][j];
		}
		for(int j=c; j>=1; j--) {
			dpR[i][j] = (dpR[i][j+1]+a[i][j])*a[i][j];
		}
	}
	for(int j=1; j<=c; j++) {
		for(int i=1; i<=r; i++) {
			dpD[i][j] = (dpD[i-1][j]+a[i][j])*a[i][j];
		}
		for(int i=r; i>=1; i--) {
			dpU[i][j] = (dpU[i+1][j]+a[i][j])*a[i][j];
		}
	}
	int mx=0;
	for(int i=1; i<=r; i++) {
		for(int j=1; j<=c; j++) {
			mx = max({mx,
					dpL[i][j]+dpU[i][j]-1,
					dpR[i][j]+dpU[i][j]-1,
					dpL[i][j]+dpD[i][j]-1,
					dpR[i][j]+dpD[i][j]-1
					});// searching for perpendicular point 
		}
	}
	printf("%d\n", mx);
	memset(dpU, 0, sizeof(dpU[0])*(r+1));
	memset(dpD, 0, sizeof(dpD[0])*(r+1));
	memset(dpL, 0, sizeof(dpL[0])*(r+1));
	memset(dpR, 0, sizeof(dpR[0])*(r+1));
}
int main() {
	int t;
	scanf("%d", &t);
	while(t--)
		solve();
	return 0;
}

