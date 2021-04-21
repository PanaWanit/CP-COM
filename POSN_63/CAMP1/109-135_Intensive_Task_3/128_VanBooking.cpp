#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n, k;
	cin >> n >> k;
	priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
	for(int i=1; i<=k; ++i)
		pq.emplace(0, i);
	for(int i=1, x; i<=n; ++i) {
		cin >> x;
		auto p = pq.top();
		pq.pop();
		cout << p.second << "\n";
		pq.emplace(p.first+x, p.second);
	}
	return 0;
}

