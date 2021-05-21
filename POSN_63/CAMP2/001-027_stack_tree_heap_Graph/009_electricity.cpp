#include<bits/stdc++.h>
using namespace std;

#define T pair<int, int>
#define vt vector

const int mxN = 5e5+10;
int d[mxN];
priority_queue<T, vt<T>, greater<T>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,nw;
	cin >> n >> k >> nw;
	pq.push({nw, 0});
	for(int i=1; i<n; ++i) {
		cin >> nw;
		while(i-pq.top().second>k) pq.pop();
		d[i]=pq.top().first+nw;
		pq.push({d[i], i});
	}
	cout << d[n-1] << "\n";
	return 0;
}
