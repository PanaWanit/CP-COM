#include<bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	priority_queue<int, vector<int>, greater<int>> pq;
	while(t--) {
		char opr;
		int a;
		cin >> opr;
		if(opr=='A') {
			cin >> a;
			pq.push(a);
		}
		else {
			if(pq.empty()) cout << -1 << "\n";
			else cout << pq.top(), pq.pop();
		}
	}
	return 0;
}

