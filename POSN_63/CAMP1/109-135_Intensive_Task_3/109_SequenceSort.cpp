#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	vector<vector<int>> a;
	int n,m;
	cin >> n >> m;
	for(int i=0; i<n; ++i) {
		vector<int> b;
		for(int j=0,x; j<m; ++j)
			cin >> x, b.push_back(x);
		a.push_back(b);
	}
	sort(a.begin(), a.end());
	for(auto& x : a ) {
		for(auto& y : x)
			cout << y << " ";
		cout << "\n";
	}
	return 0;
}

