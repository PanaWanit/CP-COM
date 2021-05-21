#include<bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()

priority_queue<int> mx;
priority_queue<int, vector<int>, greater<int>> mn;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n,x;
	cin >> n;
	cout << fixed << setprecision(1);
	for(int i=1; i<=n; ++i) {
		cin >> x;
		mx.push(x);
		mn.push(mx.top());
		mx.pop();
		if(sz(mx)<sz(mn)) {
			mx.push(mn.top());
			mn.pop();
		}
		if(i%2==1) cout << mx.top() << ".0\n";
		else cout << 1.0*(mx.top()+mn.top())/2 << "\n";
	}
  return 0;
}
