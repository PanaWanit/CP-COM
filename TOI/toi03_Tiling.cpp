#include<bits/stdc++.h>
using namespace std;

#define vt vector
#define T pair<int, int>
#define sz(x) (int)(x).size()

const int mxN = 20;
const int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};
vt<T> v;
bool used[mxN][mxN];
int a[mxN][mxN], n;
void cou(int i, int j, int num) {
	used[i][j]=1;
	v.push_back({i, j});
	for(int k=0; k<4; ++k) {
		int ii = i+di[k], jj = j+dj[k];
		if(ii>=n||jj>=n||ii<0||jj<0) continue;
		if(used[ii][jj] || a[ii][jj]!=num) continue;
		cou(ii, jj, num);
	}
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int cnt=0;
	cin >> n;
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j)
			cin >> a[i][j];
	}
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			if(!used[i][j]&&a[i][j]!=0) {
				cou(i, j, a[i][j]);
				if(sz(v)!=3) {
					v.clear();
					continue;
				}
				sort(v.begin(), v.end());
				if(v[0].first==v[1].first&& (v[0].second==v[2].second||v[1].second==v[2].second)) ++cnt;
				else if(v[1].first==v[2].first&&(v[0].second==v[1].second || v[0].second==v[2].second)) ++cnt;
				v.clear();
			}
		}
	}
	cout << cnt << "\n";
	return 0;
}

