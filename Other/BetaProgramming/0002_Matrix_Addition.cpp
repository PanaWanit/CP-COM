#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; i++)
		for(int j=0; j<m; j++)
			cin >> a[i][j];
	for(int i=0; i<n; i++) {
		for(int j=0,x; j<m; j++)
			cin >> x,cout << a[i][j] + x << " ";
		cout << "\n";
	}
	return 0;
}

