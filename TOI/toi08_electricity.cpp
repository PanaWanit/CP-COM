#include<bits/stdc++.h>
using namespace std;
const int mxN = 5e5+10;
int a[mxN], ans[mxN];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k;
	cin >> n >> k;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	for(int i=0; i<n; ++i)
		cin >> a[i];
	pq.emplace(a[0], 0);
	for(int i=1; i<n; ++i) {
		while(i-pq.top().second>k) pq.pop();
		ans[i]=pq.top().first+a[i];
		pq.emplace(ans[i], i);
	}
	cout << ans[n-1] << "\n";
	return 0;
}

