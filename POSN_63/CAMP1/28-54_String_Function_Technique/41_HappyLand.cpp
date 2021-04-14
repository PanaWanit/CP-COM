#include<bits/stdc++.h>
using namespace std;
const int di[]={1, -1, 0, 0, 1, 1, -1, -1}, dj[] ={0 , 0, 1, -1, 1, -1, 1, -1};
int r,c;
double a[5][5],mn=2e9;
bool vis[5][5];
void recur(int i, int j, double sum) {
	vis[i][j]=1;
	for(int k=0; k<8; ++k) {
		int ii=i+di[k], jj=j+dj[k];
		if(ii>=r||jj>=c||ii<0||jj<0) continue;
		a[ii][jj] += a[i][j]/10;
	}
	bool ch=0;
	for(int ii=0; ii<r; ++ii) {
		for(int jj=0; jj<c; ++jj) {
			if(vis[ii][jj]) continue;
			ch=1;
			recur(ii, jj, sum+a[ii][jj]);
		}
	}
	if(!ch) mn=min(mn, sum);
	for(int k=0; k<8; ++k) {
		int ii=i+di[k], jj=j+dj[k];
		if(ii>=r||jj>=c||ii<0||jj<0) continue;
		a[ii][jj] -= a[i][j]/10;
	}
	vis[i][j]=0;
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> r >> c;
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			cin >> a[i][j];
	for(int i=0; i<r; ++i)
		for(int j=0; j<c; ++j)
			recur(i, j, a[i][j]);
	cout << fixed << setprecision(2) << mn << "\n";
	return 0;
}
