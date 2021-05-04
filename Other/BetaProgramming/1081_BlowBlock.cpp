#include<bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
const int mxN = 501;
int a[mxN][mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	vector<int> q[4];
	for(int i=0; i<n; ++i) {
		for(int j=0; j<n; ++j) {
			int x;
			cin >> x;
			q[i%2*2+j%2].push_back(x);
		}
	}
	for(int i=0; i<4; ++i)
		sort(all(q[i]));
	int ans=0;
	for(int i=0; i<n*n/4; ++i)
		ans += q[0][i]*q[1][i]*q[2][i]*q[3][i];
	cout << ans << "\n";
	return 0;
}
