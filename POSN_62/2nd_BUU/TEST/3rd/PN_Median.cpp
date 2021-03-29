#include<bits/stdc++.h>
using namespace std;
using db=double;
priority_queue<db, vector<db>, greater<db>> mn;
priority_queue<db> mx;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cout << fixed << setprecision(1);
	int n;
	db x;
	cin >> n;
	cin >> x;
	cout << x << "\n";
	mx.push(x);
	for(int i=n; i<=n; i++) {
		cin >> x;
		mx.push(x);
		if(i%2==1) cout << mx.top() << "\n";
		else {
			mn.push(mx.top());
			mx.pop();
			cout << ((mn.top()+mx.top())/2) << "\n";
		}
	}
	return 0;
}
