#include<bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--) {
		char opr;
		int x;
		cin >> opr;
		if(opr == 'A') {
			cin >> x;
			pq.push(x);
		}
		else {
			cout << pq.top() << "\n";
			pq.pop();
		}
	}
	return 0;
}
