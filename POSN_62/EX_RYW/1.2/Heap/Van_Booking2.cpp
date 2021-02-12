#include<bits/stdc++.h>
using namespace std;
struct A {
	int idx, t;
	bool operator < (const A&o) const {
		if(idx!=o.idx) return idx > o.idx;
		return t > o.t;
	}
};
priority_queue<A> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,k,t;
	cin >> n >> k;
	for(int i=1; i<=k; i++)
		pq.push({i, 0});
	while(n--) {
		cin >> t;
		cout << pq.top().idx << "\n";
		A tmp = {pq.top().idx, pq.top().t+t};
		pq.pop();
		pq.push(tmp);
	}
	return 0;
}
